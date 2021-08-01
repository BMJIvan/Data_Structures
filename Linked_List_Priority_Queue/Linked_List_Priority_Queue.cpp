 #include "Linked_List_Priority_Queue.h"

Linked_List_Priority_Queue::Linked_List_Priority_Queue(int Number_Values_r, bool ascendant_r)
{
    head = NULL;
    tail = NULL;
    length = 0;
    Number_Values = Number_Values_r;
    ascendant = ascendant_r;
}

Linked_List_Priority_Queue::~Linked_List_Priority_Queue()
{

}

void Linked_List_Priority_Queue::enqueue(int n)
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
            if(Compare(tmp->data, compare->data))
            {
                Insert(i, tmp->data);
                if(length > Number_Values)  dequeue();
                break;
            }
            else
            {
                if(i + 1 == length && i + 1 < Number_Values)
                {
                    Append(tmp->data);
                    if(length > Number_Values)  dequeue();
                    break;
                }
            }
            compare = compare->next;
        }
    }
}

void Linked_List_Priority_Queue::Append(int Value)
{
    node *p = new node;
    p->data = Value;
    p->next = NULL;
    node *tmp;
    tmp = head;
    while(tmp->next != NULL)    tmp=tmp->next;
    tmp->next = p;
    length++;
}

bool Linked_List_Priority_Queue::Compare(int i, int j)
{
    return ascendant==true ? (i > j ? false : true) : (i < j ? false : true);
}

void Linked_List_Priority_Queue::Insert(int pos, int value)
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
        while(pos-- > 1)    tmp=tmp->next;
        p->next = tmp->next;
        tmp->next = p;
        
    }
    length++;
}

int Linked_List_Priority_Queue::len()
{
    return length;
}

int Linked_List_Priority_Queue::dequeue()
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