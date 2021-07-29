#ifndef linked_list_priority_queue_H
#define linked_list_priority_queue_H
#include <iostream>

struct node
{
    int data;
    node *next;
};

class linked_list_priority_queue
{
    private:
        node *head, *tail;
        int length;
        int M;
        
    public:
        linked_list_priority_queue();
        linked_list_priority_queue(int M_v);
        ~linked_list_priority_queue();

        void enqueue(int n);
        int len();
        int dequeue();
        int dequeue_min();
        void insert(int pos, int value);
        static void display (linked_list_priority_queue a)
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