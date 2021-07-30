#ifndef Binery_Heap_h
#define Binary_Heap_h
#include <cstdlib>

class Binary_Heap
{
    private:
        int *Array;
        int length;
        int Aux;
        bool ascendant;

    public:
        Binary_Heap(int *Array_r, bool ascendant_bool_r);
        ~Binary_Heap();
        void Insert(int x);
        int Delete_Head();


    private:
        void Swim(int k);
        void Sink(int k);
        void Exchange(int , int );
        bool Compare(int , int);
};

#endif