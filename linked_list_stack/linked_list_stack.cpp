#include "linked_list_stack.h" 
linked_list_stack::linked_list_stack()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

linked_list_stack::~linked_list_stack(){
   
}

void linked_list_stack::push(int n)
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

int linked_list_stack::len()
{
    return length;
}

int linked_list_stack::pop ()
{
    if(length == 0) return -1;

    int pos = length;
    node *tmp = head;
    while(pos-- > 2)    tmp=tmp->next;
    
    int data;
    node *temp;
    if(length-- == 1)
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
    delete temp;
    return data;
}