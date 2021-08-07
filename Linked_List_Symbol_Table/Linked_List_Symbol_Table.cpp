#include "Linked_List_Symbol_Table.h" 
Linked_List_Symbol_Table::Linked_List_Symbol_Table()
{
    head = NULL;
    tail = NULL;
    length = 0;
}

Linked_List_Symbol_Table::~Linked_List_Symbol_Table(){
   
}

void Linked_List_Symbol_Table::push(std::string key, int value)
{
    
    node *tmp = new node;
    tmp->key = key;
    tmp->value = value;
    tmp->Null = false;
    tmp->next = NULL;

    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else 
    {
        if(exist(key))
        {
            change->value = tmp->value;
            return;
        }
        tail->next = tmp;
        tail = tail->next;
    }
    length++;
}

int Linked_List_Symbol_Table::len()
{
    return length;
}

bool Linked_List_Symbol_Table::exist(std::string key)
{
    node *tmp = new node;
    tmp = head;
    for(int pos = 0; pos < length; pos++)
    {
        if(key == tmp->key && tmp->Null == false)
        {
            change = tmp;
            return true;
        }
        change_before = tmp;
        tmp = tmp->next;
    }
    return false;
}

void Linked_List_Symbol_Table::pop(std::string key)
{
    if(length == 0) return;
    if(!exist(key)) return;

   
    node *tmp = head;    
    node *temp;
    if(length-- == 1)
    {
        temp = change;
        head = NULL;
        tail = NULL;
    }
    else
    {
        temp = change;
        change_before->next = change->next;
        
        if(change->next == NULL)
        {
            tail->next = change_before;
            tail = tail->next;
        }
        else
        {
            if(head == change)
            {
                head = change->next;
                change->next = NULL;
                temp = change;
            }
            else
            {
                temp = change;
                change_before->next = change->next;
                change->next = NULL;
                temp = change;
            }
            change->next = NULL;
        }
    }
    delete temp;
    return;
}