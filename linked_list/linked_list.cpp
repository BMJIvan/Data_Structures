#include "linked_list.h" 
linked_list::linked_list()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

linked_list::~linked_list(){

}

void linked_list::append(int n)
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
    length = length + 1;
}

void linked_list::insert (int pos, int value)
{
    if(pos+1 > length) return;
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
        while(pos>1)
        {
            tmp=tmp->next;
            --pos;
        }
        p->next = tmp->next;
        tmp->next = p;
    }
}



int linked_list::len()
{
    return length;
}
void linked_list::del (int pos)
{
    if(length == 0 || pos < 0 || pos >= length) return;
    node *tmp;
    tmp = head; 
    while(pos>1)
    {
        tmp=tmp->next;
        --pos;
    }
    node *temp;
    temp = tmp->next;
    tmp->next = temp->next;
    delete temp;
}