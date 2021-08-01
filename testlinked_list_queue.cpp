#include <iostream>
#include "linked_list_queue/linked_list_queue.h"

int main()
{
    linked_list_queue list;
    int data;

    for(int i = 0; i < 10; i++)
    {
        list.enqueue(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        linked_list_queue::display(&list);
        std::cout<<std::endl;
    }
    
    for(int i = 0; i < 5; i++)
    {
        data = list.dequeue();
        std::cout<<"pop: "<<data<<std::endl;
        linked_list_queue::display(&list);
        std::cout<<std::endl;
    }

    for(int i = 5; i < 15; i++)
    {
        list.enqueue(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        linked_list_queue::display(&list);
        std::cout<<std::endl;
    }

    linked_list_queue::delete_list(&list);
    linked_list_queue::display(&list);

    return 0;
}
