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

        void push(int n);
        int len();
        int pop ();
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
};


#endif