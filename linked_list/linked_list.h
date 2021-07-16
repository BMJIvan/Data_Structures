#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>

struct node
{
    int data;
    node *next;
};

class linked_list
{
    private:
        node *head, *tail;
        int length;
        
    public:
        linked_list();
        ~linked_list();

        void append(int n);
        void insert (int pos, int value);
        int len();
        void del (int pos);
        static void display (linked_list a)
        {
            if (a.length == 0) return;
            node *tmp;
            tmp = a.head;
            while(tmp != NULL)
            {
                std::cout << tmp->data <<","; //std::endl;
                tmp=tmp->next;
            }
        }
        static void concatenate (linked_list *list_a, linked_list *list_b)
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
};


#endif