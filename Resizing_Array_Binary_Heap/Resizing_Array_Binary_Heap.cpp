#include "Resizing_Array_Binary_Heap.h"

Resizing_Array_Binary_Heap::Resizing_Array_Binary_Heap(bool ascendant_bool_r)
{
    Array = new int[1];
    length = 1;
    index = 0;
    ascendant = ascendant_bool_r;
}

Resizing_Array_Binary_Heap::~Resizing_Array_Binary_Heap()
{
   
}

void Resizing_Array_Binary_Heap::Swim(int k)
{
    while(k > 1 && Compare((k/2), k))
        {
            Exchange(k, (k/2));
            k = k/2;
        }
}

void Resizing_Array_Binary_Heap::Insert(int value)
{
    if(length == index) resize(2*length);
    Array[index++] = value;
    Swim(index);
}
   
void Resizing_Array_Binary_Heap::Sink(int k)
{
    while(2*k <= index)
    {
        int j = 2*k;
        if(j < index && Compare(j, j+1))  j++;
        if(!Compare(k , j)) break;
        Exchange(k, j);
        k = j;
    }
}

void Resizing_Array_Binary_Heap::Exchange(int i, int j)
{
    if(i-- == j--) return;
    Aux = Array[i];
    Array[i] = Array[j];
    Array[j] = Aux;
}

int Resizing_Array_Binary_Heap::Delete_Head()
{
    int Max = Array[0];
    Exchange(1, index--);
    Sink(1);
    Array[index] = 0; //prevent Ioitering
    if(index > 0 && index == length/4) resize(length/2);
    return Max;
}

bool Resizing_Array_Binary_Heap::Compare(int i, int j)
{
    i--;
    j--;
    return ascendant==false ? Array[i] < Array[j] : Array[i] > Array[j];
}

void Resizing_Array_Binary_Heap::resize(int capacity)
{
    length = capacity;
    int *new_Array = new int[length];
    for(int i = 0; i < index; i++)  new_Array[i] = Array[i];
    Array = new_Array;
}

int* Resizing_Array_Binary_Heap::get_Array()
{
    return Array;
}

int Resizing_Array_Binary_Heap::get_index()
{
    return index;
}