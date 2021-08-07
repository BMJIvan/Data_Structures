#ifndef Linked_List_Symbol_Table_H
#define Linked_List_Symbol_Table_H
#include <iostream>

struct node
{
    std::string key;
    int value;
    bool Null = true;
    node *next;
};

class Linked_List_Symbol_Table
{
    private:
        node *head, *tail;
        int length;
        node *change;
        node *change_before;
        
    public:
        Linked_List_Symbol_Table();
        ~Linked_List_Symbol_Table();
        void push(std::string key, int value);
        int len();
        void pop (std::string key);
        bool empty();
        bool exist(std::string key);
        static void display (Linked_List_Symbol_Table *ST)
        {
            if (ST->head == NULL)
             {
                std::cout<<"Empty"<<std::endl;
                return;
            }
            node *tmp;
            tmp = ST->head;
            while(tmp != NULL)
            {
                std::cout << "(" <<tmp->key << ", " <<tmp->value << ") "; //std::endl;
                tmp=tmp->next;
            }
        }
        static void delete_list(Linked_List_Symbol_Table *ST)
        {
            if(ST->head == NULL)
            {
                std::cout<<"Empty"<<std::endl;
                return;
            } 

            node *current = ST->head;
            node *Next = NULL;

            while(current != NULL)
            {
                Next = current->next;
                free(current);
                current = Next;
            }
            ST->head = NULL;
            ST->tail = NULL;
            ST->length = 0;
            std::cout<<"list deleted"<<std::endl;
        }
};
#endif