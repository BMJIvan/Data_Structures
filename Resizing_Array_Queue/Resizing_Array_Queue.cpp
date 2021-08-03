#include "Resizing_Array_Queue.h"

Resizing_Array_Queue::Resizing_Array_Queue()
{
    Array = new int[1];
    length = 1;
    index = 0;
}

Resizing_Array_Queue::~Resizing_Array_Queue()
{

}

void Resizing_Array_Queue::enqueue(int value)
{
    if(index++ == length) resize(2*length);
    int pos = 0;
    int Aux;
    int Aux_change;
    Aux = Array[pos];
    Array[pos] = value;
    while(++pos <= index)
    {
        Aux_change = Array[pos];
        Array[pos] = Aux;
        Aux = Aux_change;
    }
}

int Resizing_Array_Queue::dequeue()
{
    int item = Array[--index];
    Array[index] = -1;
    if(index > 0 && index == length/4) resize(length/2);
    return item;
}

void Resizing_Array_Queue::resize(int capacity)
{
    length = capacity;
    int *new_Array = new int[length];
    for(int i = 0; i < index; i++)  new_Array[i] = Array[i];
    Array = new_Array;
}

bool Resizing_Array_Queue::empty()
{
    return length == 1 && index == 0 ? true : false;
}
