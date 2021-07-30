#include "Binary_Heap.h"

Binary_Heap::Binary_Heap(int *Array_r, bool ascendant_bool_r)
{
    Array = Array_r;
    length = 0;
    ascendant = ascendant_bool_r;
}

Binary_Heap::~Binary_Heap()
{
    Array = new int;
    delete Array;
    Array = NULL;
}

void Binary_Heap::Swim(int k)
{
    while(k > 1 && Compare((k/2) - 1, k - 1))
        {
            Exchange(k - 1, (k/2) - 1);
            k = k/2;
        }
}

void Binary_Heap::Insert(int x)
{
    Array[length++] = x;
    Swim(length);
}
   
void Binary_Heap::Sink(int k)
{
    while(2*k <= length)
    {
        int j = 2*k;
        if(j < length && Compare(j - 1, j+1 - 1))  j++;
        if(!Compare(k - 1, j - 1)) break;
        Exchange(k - 1, j - 1);
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

int Binary_Heap::Delete_Head()
{
    int Max = Array[0];
    Exchange(0, --length);
    Sink(1);
    Array[length] = 0; //prevent Ioitering
    return Max;
}

bool Binary_Heap::Compare(int i, int j)
{
    return ascendant==false ? Array[i] < Array[j] : Array[i] > Array[j];
}