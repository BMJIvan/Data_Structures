#include "linked_list_priority_queue.h" 
linked_list_priority_queue::linked_list_priority_queue()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

linked_list_priority_queue::linked_list_priority_queue(int M_v)
{
    head = NULL;
    tail = NULL;
    length = 0;
    M = M_v;
}

linked_list_priority_queue::~linked_list_priority_queue(){

}

void linked_list_priority_queue::enqueue(int n)
{
    node *tmp = new node;
    tmp->data = n;
    
    if (head == NULL)
    {
        tmp->next = NULL;
        head = tmp;
        tail = tmp;
        length++;
    }
    else 
    {
        node *compare = new node;
        compare = head;
        
        for(int i = 0; i < length; i++)
        {
            if(tmp->data > compare->data)
            {
                insert(i, tmp->data);
                if(length > M) 
                {
                    dequeue();
                }
                break;
            }
            compare = compare->next;
        }
    }
}

void linked_list_priority_queue::insert(int pos, int value)
{
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
    length++;
}

int linked_list_priority_queue::len()
{
    return length;
}

int linked_list_priority_queue::dequeue()
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