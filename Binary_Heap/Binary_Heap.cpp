#include "Binary_Heap.h"

Binary_Heap::Binary_Heap(int *Array_r)
{
    Array = Array_r;
    length = -1;
}

Binary_Heap::~Binary_Heap()
{
    Array = new int;
    delete Array;
    Array = NULL;
}

void Binary_Heap::Swim(int k)
{
    k = k + 1;
    while(k > 1 && Less((k/2) - 1, k - 1))
        {
            Exchange(k - 1, (k/2) - 1);
            k = k/2;
        }
}

void Binary_Heap::Insert(int x)
{
    Array[++length] = x;
    Swim(length);
}
   
void Binary_Heap::Sink(int k)
{
    while(2*k <= length)
    {
        int j = 2*k;
        if(j < length && !Less(j, j+1))  j++;
        if(0 < Array[k] - Array[j]) break;
        Exchange(k, j);
        k = j;
    }
}

void Binary_Heap::Exchange(int i, int j)
{
    if(i == j) return;
    Aux = Array[i];
    Array[i] = Array[j];
    Array[j] = Aux;
}

int Binary_Heap::Delete_Max()
{
    int Max = Array[1];
    Exchange(1, length--);
    Sink(1);
    Array[length+1] = 0; //prevent Ioitering
    return Max;
}

bool Binary_Heap::Less(int i, int j)
{
    return Array[i] < Array[j];
}