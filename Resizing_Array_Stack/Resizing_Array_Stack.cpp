#include "Resizing_Array_Stack.h"

Resizing_Array_Stack::Resizing_Array_Stack()
{
    Array = new int[1];
    length = 1;
    index = 0;
}

Resizing_Array_Stack::~Resizing_Array_Stack()
{

}

void Resizing_Array_Stack::push(int value)
{
    if(index == length) resize(2*length);
    Array[index++] = value;
}

int Resizing_Array_Stack::pop()
{
    int item = Array[--index];
    Array[index] = -1;
    if(index > 0 && index == length/4) resize(length/2);
    return item;
}

void Resizing_Array_Stack::resize(int capacity)
{
    length = capacity;
    int *new_Array = new int[length];
    for(int i = 0; i < index; i++)  new_Array[i] = Array[i];
    Array = new_Array;
}

bool Resizing_Array_Stack::empty()
{
    return length == 1 && index == 0 ? true : false;
}

int Resizing_Array_Stack::len()
{
    return length;
}