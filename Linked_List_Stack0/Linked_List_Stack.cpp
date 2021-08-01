#include "Linked_List_Stack.h" 
Linked_List_Stack::Linked_List_Stack()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

Linked_List_Stack::~Linked_List_Stack(){
   
}

void Linked_List_Stack::push(int n)
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

int Linked_List_Stack::len()
{
    return length;
}

int Linked_List_Stack::pop ()
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