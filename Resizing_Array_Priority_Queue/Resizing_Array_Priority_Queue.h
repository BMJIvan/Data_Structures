#ifndef RESIZING_ARRAY_Priority_QUEUE_H
#define RESIZING_ARRAY_Priority_QUEUE_H
#include <iostream>

class Resizing_Array_Priority_Queue
{
    private:
        int *Array;
        int length;
        int index;
        bool Max_Values;
        int Number_Values;
    
    public:
        Resizing_Array_Priority_Queue(int Number_Values, bool Max_Values_r);
        ~Resizing_Array_Priority_Queue();
        void enqueue(int value);
        bool Compare(int value, int compare);
        void Insert(int pos, int value);
        int dequeue();
        void resize(int capacity);
        bool empty();
        static void display(Resizing_Array_Priority_Queue *R_Array)
        {
            if(R_Array->empty()) 
            {
                std::cout << "Empty" << std::endl;
                return;
            }
            for(int i = 0; i < R_Array->index; i++)
            {
                std::cout << R_Array->Array[i]  << ","; 
            }
        }
        static void delete_Array(Resizing_Array_Priority_Queue *R_Array)
        { 
            R_Array->Array = new int[1];
            R_Array->length = 1;
            R_Array->index = 0;
            std::cout << "Array deleted" << std::endl;
        }

};

#endif