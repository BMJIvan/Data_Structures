#include <iostream>
#include "Linked_List_Stack/Linked_List_Stack.h"

int main()
{
    Linked_List_Stack list;
    int data;

    for(int i = 0; i < 10; i++)
    {
        list.push(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        Linked_List_Stack::display(&list);
        std::cout<<std::endl;
    }
    
    for(int i = 0; i < 5; i++)
    {
        data = list.pop();
        std::cout<<"pop: "<<data<<std::endl;
        Linked_List_Stack::display(&list);
        std::cout<<std::endl;
    }

    for(int i = 5; i < 15; i++)
    {
        list.push(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        Linked_List_Stack::display(&list);
        std::cout<<std::endl;
    }

    Linked_List_Stack::delete_list(&list);
    Linked_List_Stack::display(&list);

    return 0;
}
