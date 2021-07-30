#include <iostream>
#include <time.h>
#include <math.h>
#include "Binary_Heap/Binary_Heap.h"

void show_binary_tree(int *array, int nb_data);

int main()
{
    //head
    srand(time(NULL));
    unsigned t0 = 0, t1 = 0;
    double Time;
    int nb_data = 30;
    int Array[30] = {};
    int Head[5] = {};
    Binary_Heap tree(Array, true);
    
    //Body
    t0=clock();
    std::cout<<std::endl<<"inicio programa"<<std::endl;
    show_binary_tree(Array, nb_data);
    std::cout<<std::endl;

    for(int i = 1; i < 11; i++)
    {
        tree.Insert(i);
        std::cout<<"Insert: "<<i<<","<<std::endl;
        show_binary_tree(Array, nb_data);    
        std::cout<<std::endl;
    }
    
    for(int i = 5; i < 15; i++)
    {
        tree.Insert(i);
        std::cout<<"push: "<<i<<","<<std::endl;
        show_binary_tree(Array, nb_data);    
        std::cout<<std::endl;
    }

    for(int i = 0; i < 5; i++)
    {
        Head[i] = tree.Delete_Head();
         std::cout<<"delete: "<<Head[i]<<","<<std::endl;
        show_binary_tree(Array, nb_data);    
        std::cout<<std::endl;
    }

    return 0;
}

void show_binary_tree(int *array, int nb_data){

int k = 1;
int step = 1;
    for(int i = 0; i < nb_data; i++)
    {
        std::cout<<array[i]<<",";
        if(i == step - 1)
        {
            k = 2*k;
            step += k;
            std::cout<<std::endl;
        }
    }
};