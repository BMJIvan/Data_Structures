#ifndef RESIZING_ARRAY_STACK_H
#define RESIZING_ARRAY_STACK_H
#include <iostream>

class Resizing_Array_Stack
{
    private:
        int *Array;
        int length;
        int index;
    
    public:
        Resizing_Array_Stack();
        ~Resizing_Array_Stack();
        void push(int value);
        int pop();
        void resize(int capacity);
        bool empty();
        static void display(Resizing_Array_Stack *R_Array)
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
        static void concatenate(Resizing_Array_Stack *Array_a, Resizing_Array_Stack *Array_b)
        {
            if(Array_a->empty())    Array_a->Array = Array_b->Array;
            if(!Array_b->empty())
            {
                for(int i = 0; i < Array_b->index; i++)     Array_a->push(Array_b->Array[i]);
            }
        }
        static void delete_Array(Resizing_Array_Stack *R_Array)
        { 
            R_Array->Array = new int[1];
            R_Array->length = 1;
            R_Array->index = 0;
            std::cout << "Array deleted" << std::endl;
        }

};

#endif