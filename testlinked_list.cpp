#include <iostream>
#include "linked_list/linked_list.h"

int main()
{
    linked_list a;
    linked_list b;
    linked_list d;

    for(int i = 0; i < 5; i++)
    {
        a.append(i);
        b.append(i*10);
        d.append(i*5);
    }
    
    linked_list c;
   
    a.insert(1, 100);
    a.insert(10, 100);
    a.append(10000);

    linked_list::concatenate(&a, &b);
    linked_list::concatenate(&c, &d);

    linked_list::display(a);
    std::cout<<std::endl;
    linked_list::display(a);
    std::cout<<std::endl;

    linked_list::display(a);
    std::cout<<std::endl;
    a.del(1);
    linked_list::display(a);
    std::cout<<std::endl;
    return 0;
}