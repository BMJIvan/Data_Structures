#include <iostream>
#include "Resizing_Array_Priority_Queue/Resizing_Array_Priority_Queue.h"

int main()
{
    int Number_Values = 5;
    bool Max_Values = false;
    Resizing_Array_Priority_Queue list(Number_Values, Max_Values);
    int data;

    for(int i = 10; i > 0; i--)
    {
        list.enqueue(i);
        std::cout<<"enqueue: "<<i<<","<<std::endl;
        Resizing_Array_Priority_Queue::display(&list);
        std::cout<<std::endl;
    }
    
    for(int i = 5; i < 15; i++)
    {
        list.enqueue(i);
        std::cout<<"enqueue: "<<i<<","<<std::endl;
        Resizing_Array_Priority_Queue::display(&list);
        std::cout<<std::endl;
    }

    return 0;
}