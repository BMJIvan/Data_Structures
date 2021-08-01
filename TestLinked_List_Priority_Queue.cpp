#include <iostream>
#include "Linked_List_Priority_Queue/Linked_List_Priority_Queue.h"

int main()
{
    int Number_Values = 5;
    bool ascendant = false;
    Linked_List_Priority_Queue list(Number_Values, ascendant);
    int data;

    for(int i = 0; i < 10; i++)
    {
        list.enqueue(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        Linked_List_Priority_Queue::display(&list);
        std::cout<<std::endl;
    }
    
    for(int i = 5; i < 15; i++)
    {
        list.enqueue(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        Linked_List_Priority_Queue::display(&list);
        std::cout<<std::endl;
    }

    return 0;
}
