#ifndef Linked_List_Stack_H
#define Linked_List_Stack_H
#include <iostream>

struct node
{
    int data;
    node *next;
};

class Linked_List_Stack
{
    private:
        node *head, *tail;
        int length;
        
    public:
        Linked_List_Stack();
        ~Linked_List_Stack();

        void push(int n);
        int len();
        int pop ();
        static void display (Linked_List_Stack *list)
        {
            if (list->head == NULL)
             {
                std::cout<<"Empty"<<std::endl;
                return;
            }
            node *tmp;
            tmp = list->head;
            while(tmp != NULL)
            {
                std::cout << tmp->data <<","; //std::endl;
                tmp=tmp->next;
            }
        }
        static void delete_list(Linked_List_Stack *list)
        {
            if(list->head == NULL)
            {
                std::cout<<"Empty"<<std::endl;
                return;
            } 

            node *current = list->head;
            node *Next = NULL;

            while(current != NULL)
            {
                Next = current->next;
                free(current);
                current = Next;
            }
            list->head = NULL;
            list->tail = NULL;
            list->length = 0;
            std::cout<<"list deleted"<<std::endl;
        }
};
#endif