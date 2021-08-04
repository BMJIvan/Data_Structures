#include <iostream>
#include <time.h>
#include <math.h>
#include "Resizing_Array_Binary_Heap/Resizing_Array_Binary_Heap.h"

int main()
{
    //head
    srand(time(NULL));
    unsigned t0 = 0, t1 = 0;
    double Time;
    int Head[5] = {};
    Resizing_Array_Binary_Heap tree(false);
   
    //Body
    t0=clock();
    std::cout<<std::endl<<"inicio programa"<<std::endl;
    std::cout<<std::endl;

    for(int i = 1; i < 11; i++)
    {
        tree.Insert(i);
        
        std::cout<<"Insert: "<<i<<","<<std::endl;
        Resizing_Array_Binary_Heap::Show_Binary_Tree(&tree);
        std::cout<<std::endl;
    }
    
    for(int i = 5; i < 15; i++)
    {
        tree.Insert(i);
        
        std::cout<<"push: "<<i<<","<<std::endl;
        Resizing_Array_Binary_Heap::Show_Binary_Tree(&tree);
        std::cout<<std::endl;
    }

    for(int i = 0; i < 5; i++)
    {
        Head[i] = tree.Delete_Head();
        std::cout<<"delete: "<<Head[i]<<","<<std::endl;
        Resizing_Array_Binary_Heap::Show_Binary_Tree(&tree);
        std::cout<<std::endl;
    }

    return 0;
}
