#ifndef linked_list_queue_H
#define linked_list_queue_H
#include <iostream>

struct node
{
    int data;
    node *next;
};

class linked_list_queue
{
    private:
        node *head, *tail;
        int length;
        
    public:
        linked_list_queue();
        ~linked_list_queue();

        void enqueue(int n);
        int len();
        int dequeue();
        static void display (linked_list_queue a)
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