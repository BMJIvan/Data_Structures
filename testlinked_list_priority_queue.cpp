#include <iostream>
#include "linked_list_priority_queue/linked_list_priority_queue.h"

int main()
{
    linked_list_priority_queue list(5);
    int data;

    for(int i = 0; i < 10; i++)
    {
        list.enqueue(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        linked_list_priority_queue::display(list);
        std::cout<<std::endl;
    }
    
    for(int i = 5; i < 15; i++)
    {
        list.enqueue(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        linked_list_priority_queue::display(list);
        std::cout<<std::endl;
    }

    return 0;
}
