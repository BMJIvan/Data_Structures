#include "Linked_List.h" 
Linked_List::Linked_List()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

Linked_List::~Linked_List(){
     
}

void Linked_List::append(int Value)
{
    node *tmp = new node;
    tmp->data = Value;
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

void Linked_List::insert (int pos, int value)
{
    if(pos >= length) return;
    node *p = new node;
    p->data = value;

    if (pos == 0)
    {
        p->next = head;
        head = p;
    }
    else 
    {
        node *tmp;
        tmp = head;
        while(pos-- > 1)    tmp=tmp->next;
        p->next = tmp->next;
        tmp->next = p;
    }
    length++;
}

int Linked_List::len()
{
    return length;
}
void Linked_List::del (int pos)
{
    if(length == 0 || pos < 0 || pos >= length) return;
    node *tmp;
    tmp = head; 
    while(pos-- > 1)    tmp=tmp->next;
    node *temp;
    temp = tmp->next;
    tmp->next = temp->next;
    delete temp;
    length--;
}