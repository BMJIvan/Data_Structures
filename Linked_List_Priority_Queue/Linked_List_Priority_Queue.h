#ifndef Linked_List_Priority_Queue_H
#define Linked_List_Priority_Queue_H
#include <iostream>

struct node
{
    int data;
    node *next;
};

class Linked_List_Priority_Queue
{
    private:
        node *head;
        int length;
        int Number_Values;
        bool Max_Values;
        
    public:
        Linked_List_Priority_Queue(int Number_Values_r, bool Max_Values_r);
        ~Linked_List_Priority_Queue();

        void enqueue(int n);
        int len();
        int dequeue();
        void Insert(int pos, int value);
        void Append(int Value);
        bool Compare(int i, int j);
        static void display (Linked_List_Priority_Queue *list)
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
                tmp = tmp->next;
            }
        }
        static void delete_list(Linked_List_Priority_Queue *list)
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
            list->length = 0;
            std::cout<<"list deleted"<<std::endl;
        }
};


#endif