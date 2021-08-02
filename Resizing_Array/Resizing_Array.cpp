#include "Resizing_Array.h"

Resizing_Array::Resizing_Array()
{
    Array = new int[1];
    length = 1;
    index = 0;
}

Resizing_Array::~Resizing_Array()
{

}

void Resizing_Array::push(int value)
{
    if(index == length) resize(2*length);
    Array[index++] = value;
}

void Resizing_Array::resize(int capacity)
{
    length = capacity;
    int *new_Array = new int[length];
    for(int i = 0; i < index; i++)  new_Array[i] = Array[i];
    Array = new_Array;
}

void Resizing_Array::insert(int pos, int value)
{
    if(pos >= index) return;
    if(index++ == length) resize(2*length);
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

void Resizing_Array::del(int pos)
{
    index--;
    while(pos < index)  Array[pos++] = Array[pos + 1];
    Array[pos] = -1;
}

bool Resizing_Array::empty()
{
    return length == 1 && index == 0 ? true : false;

}