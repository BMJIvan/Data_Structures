#include "linked_list_stack.h" 
linked_list::linked_list()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

linked_list::~linked_list(){

}

void linked_list::push(int n)
{
    node *tmp = new node;
    tmp->data = n;
    tmp->next = NULL;
    
    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else 
    {
        tail->next = tmp;
        tail = tail->next;
    }
    length++;
}

int linked_list::len()
{
    return length;
}

int linked_list::pop ()
{
    if(length == 0) return -1;
    int pos = length;
    node *tmp = head;
    while(pos > 2)
    {
        tmp=tmp->next;
        --pos;
    }

    int data;
    node *temp;
    if(length == 1)
    {
        data = tmp->data;
        temp = tmp;
        head = NULL;
        tail = NULL;
    }
    else
    {
        data = tmp->next->data;
        temp = tmp->next;
        tmp->next = NULL;
        tail->next = tmp;
        tail = tail->next;
    }
    length--;
    delete temp;
    return data;
}