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
        static void display (linked_list_queue *list)
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
        static void delete_list(linked_list_queue *list)
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