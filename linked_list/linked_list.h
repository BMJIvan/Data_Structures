#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>

struct node
{
    int data;
    node *next;
};

class Linked_List
{
    private:
        node *head, *tail;
        int length;
        
    public:
        Linked_List();
        ~Linked_List();

        void append(int value);
        void insert (int pos, int value);
        int len();
        void del (int pos);
        static void display (Linked_List *list)
        {
            if (list->head == NULL)
             {
                std::cout << "Empty" << std::endl;
                return;
            }
            node *tmp;
            tmp = list->head;
            while(tmp != NULL)
            {
                std::cout << tmp->data <<",";
                tmp = tmp->next;
            }
        }
        static void concatenate (Linked_List *list_a, Linked_List *list_b)
        {
            if(list_a->head != NULL  && list_b->head != NULL)
            {
                list_a->tail->next = list_b->head;
            }
            else if (list_a->head == NULL && list_b->head != NULL)
            {
                list_a->head = list_b->head;
                list_a->tail = list_b->tail;
            }
        }
        static void delete_list(Linked_List *list)
        {
            if(list->head == NULL)
            {
                std::cout << "Empty" << std::endl;
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
            std::cout << "list deleted" << std::endl;
        }
};

#endif