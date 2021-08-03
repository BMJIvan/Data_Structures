#include <iostream>
#include "Resizing_Array_Queue/Resizing_Array_Queue.h"

int main()
{
    Resizing_Array_Queue Array;
    int data;

    for(int i = 0; i < 10; i++)
    {
        Array.enqueue(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        Resizing_Array_Queue::display(&Array);
        std::cout<<std::endl;
    }
    
    for(int i = 0; i < 5; i++)
    {
        data = Array.dequeue();
        std::cout<<"pop: "<<data<<std::endl;
        Resizing_Array_Queue::display(&Array);
        std::cout<<std::endl;
    }

    for(int i = 5; i < 15; i++)
    {
        Array.enqueue(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        Resizing_Array_Queue::display(&Array);
        std::cout<<std::endl;
    }

    Resizing_Array_Queue::delete_Array(&Array);
    Resizing_Array_Queue::display(&Array);

    return 0;
}