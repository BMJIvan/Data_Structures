#ifndef linked_list_stack_H
#define linked_list_stack_H
#include <iostream>

struct node
{
    int data;
    node *next;
};

class linked_list_stack
{
    private:
        node *head, *tail;
        int length;
        
    public:
        linked_list_stack();
        ~linked_list_stack();

        void push(int n);
        int len();
        int pop ();
        static void display (linked_list_stack a)
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