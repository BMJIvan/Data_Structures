#include <iostream>
#include "Resizing_Array/Resizing_Array.h"

int main()
{
    Resizing_Array a;
    Resizing_Array b;
    Resizing_Array d;
    
    for(int i = 0; i < 5; i++)
    {
        a.push(i);
        b.push(i*10);
        d.push(i*5);
    }
    
    Resizing_Array c;
   
    a.insert(1, 100);
    a.insert(10, 100);
    a.push(10000);

    Resizing_Array::concatenate(&a, &b);
    Resizing_Array::concatenate(&c, &d);
    
    Resizing_Array::display(&a);
    std::cout << std::endl;
    Resizing_Array::display(&b);
    std::cout << std::endl;

    Resizing_Array::display(&d);
    std::cout << std::endl;
    a.del(1);
    Resizing_Array::display(&c);
    std::cout << std::endl;

    Resizing_Array::display(&a);
    std::cout << std::endl;
    a.del(5);
    Resizing_Array::display(&a);
    std::cout << std::endl;

    for(int i = 0; i < 20; i++)
    {
        a.push(i);
        Resizing_Array::display(&a);
        std::cout << std::endl;
    }

    int item;
    for(int i = 25; i > 0; i--)
    {
        item = a.pop();
        Resizing_Array::display(&a);
        std::cout << "   " << item << "   " << a.len();
        std::cout << std::endl;
    }

    Resizing_Array::delete_Array(&a);
    Resizing_Array::delete_Array(&b);
    Resizing_Array::delete_Array(&c);
    Resizing_Array::delete_Array(&d);

    Resizing_Array::display(&a);
    Resizing_Array::display(&b);
    Resizing_Array::display(&c);
    Resizing_Array::display(&d);

    return 0;
}