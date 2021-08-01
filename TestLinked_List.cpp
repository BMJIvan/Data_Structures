#include <iostream>
#include "Linked_List/Linked_List.h"

int main()
{
    Linked_List a;
    Linked_List b;
    Linked_List d;
    
    for(int i = 0; i < 5; i++)
    {
        a.append(i);
        b.append(i*10);
        d.append(i*5);
    }
    
    Linked_List c;
   
    a.insert(1, 100);
    a.insert(10, 100);
    a.append(10000);

    Linked_List::concatenate(&a, &b);
    Linked_List::concatenate(&c, &d);

    Linked_List::display(&a);
    std::cout << std::endl;
    Linked_List::display(&a);
    std::cout << std::endl;

    Linked_List::display(&a);
    std::cout << std::endl;
    a.del(1);
    Linked_List::display(&a);
    std::cout << std::endl;

    Linked_List::delete_list(&a);
    Linked_List::delete_list(&b);
    Linked_List::delete_list(&c);
    Linked_List::delete_list(&d);

    Linked_List::display(&a);
    Linked_List::display(&b);
    Linked_List::display(&c);
    Linked_List::display(&d);

    return 0;
}