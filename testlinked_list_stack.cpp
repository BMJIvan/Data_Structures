#include <iostream>
#include "linked_list_stack/linked_list_stack.h"

int main()
{
    linked_list_stack list;
    int data;

    for(int i = 0; i < 10; i++)
    {
        list.push(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        linked_list_stack::display(list);
        std::cout<<std::endl;
    }
    
    for(int i = 0; i < 5; i++)
    {
        data = list.pop();
        std::cout<<"pop: "<<data<<std::endl;
        linked_list_stack::display(list);
        std::cout<<std::endl;
    }

    for(int i = 5; i < 15; i++)
    {
        list.push(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        linked_list_stack::display(list);
        std::cout<<std::endl;
    }

    return 0;
}
