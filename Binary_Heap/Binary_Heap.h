#ifndef Binery_Heap_h
#define Binary_Heap_h
#include <cstdlib>

class Binary_Heap
{
    private:
        int *Array;
        int length;
        int Aux;

    public:
        Binary_Heap(int *Array_r);
        ~Binary_Heap();
        void Insert(int x);

    private:
        void Swim(int k);
        void Sink(int k);
        void Exchange(int , int );
        bool Less(int , int);
        int Delete_Max();
};

#endif