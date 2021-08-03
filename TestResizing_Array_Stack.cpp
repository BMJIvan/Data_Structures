#include <iostream>
#include "Resizing_Array_Stack/Resizing_Array_Stack.h"

int main()
{
    Resizing_Array_Stack Array;
    int data;

    for(int i = 0; i < 10; i++)
    {
        Array.push(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        Resizing_Array_Stack::display(&Array);
        std::cout<<std::endl;
    }
    
    for(int i = 0; i < 5; i++)
    {
        data = Array.pop();
        std::cout<<"pop: "<<data<<std::endl;
        Resizing_Array_Stack::display(&Array);
        std::cout<<std::endl;
    }

    for(int i = 5; i < 15; i++)
    {
        Array.push(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        Resizing_Array_Stack::display(&Array);
        std::cout<<std::endl;
    }

    Resizing_Array_Stack::delete_Array(&Array);
    Resizing_Array_Stack::display(&Array);

    return 0;
}
