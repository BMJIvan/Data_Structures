#ifndef Resizing_Array_Binery_Heap_h
#define Resizing_Array_Binary_Heap_h
#include <cstdlib>
#include <iostream>
class Resizing_Array_Binary_Heap
{
    private:
        int *Array;
        int index;
        int length;
        int Aux;
        bool ascendant;

    public:
        Resizing_Array_Binary_Heap(bool ascendant_bool_r);
        ~Resizing_Array_Binary_Heap();
        void Insert(int value);
        int Delete_Head();
        void resize(int capacity);
        int* get_Array();
        int get_index();
        static void Show_Binary_Tree(Resizing_Array_Binary_Heap *R_Array)
        {
            int *Array = R_Array->get_Array();    
            int k = 1;
            int step = 1;
                for(int i = 0; i < R_Array->get_index(); i++)
                {
                    std::cout<<Array[i]<<",";
                    if(i == step - 1)
                    {
                        k = 2*k;
                        step += k;
                        std::cout<<std::endl;
                    }
                }
        }

    private:
        void Swim(int k);
        void Sink(int k);
        void Exchange(int , int );
        bool Compare(int , int);
};

#endif