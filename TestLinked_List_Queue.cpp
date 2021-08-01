#include <iostream>
#include "Linked_List_Queue/Linked_List_Queue.h"

int main()
{
    Linked_List_Queue list;
    int data;

    for(int i = 0; i < 10; i++)
    {
        list.enqueue(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        Linked_List_Queue::display(&list);
        std::cout<<std::endl;
    }
    
    for(int i = 0; i < 5; i++)
    {
        data = list.dequeue();
        std::cout<<"pop: "<<data<<std::endl;
        Linked_List_Queue::display(&list);
        std::cout<<std::endl;
    }

    for(int i = 5; i < 15; i++)
    {
        list.enqueue(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        Linked_List_Queue::display(&list);
        std::cout<<std::endl;
    }

    Linked_List_Queue::delete_list(&list);
    Linked_List_Queue::display(&list);

    return 0;
}
