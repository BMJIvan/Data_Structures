#include "linked_list_queue.h" 
linked_list_queue::linked_list_queue()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

linked_list_queue::~linked_list_queue(){

}

void linked_list_queue::enqueue(int n)
{
    node *tmp = new node;
    tmp->data = n;
    
    if (head == NULL)
    {
        tmp->next = NULL;
        head = tmp;
        tail = tmp;
    }
    else 
    {
        tmp->next = head;
        //head->next = tmp;
        //head = head->next;
        head = tmp;
    }
    length++;
}

int linked_list_queue::len()
{
    return length;
}

int linked_list_queue::dequeue()
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