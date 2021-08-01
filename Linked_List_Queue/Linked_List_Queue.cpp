#include "Linked_List_Queue.h"

Linked_List_Queue::Linked_List_Queue()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

Linked_List_Queue::~Linked_List_Queue(){

}

void Linked_List_Queue::enqueue(int n)
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

int Linked_List_Queue::len()
{
    return length;
}

int Linked_List_Queue::dequeue()
{
    if(head == NULL) return -1;
    int pos = length;
    node *tmp = head;
    
    while(pos-- > 2)    tmp=tmp->next;
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