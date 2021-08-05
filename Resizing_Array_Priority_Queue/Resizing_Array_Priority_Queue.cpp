#include "Resizing_Array_Priority_Queue.h"

Resizing_Array_Priority_Queue::Resizing_Array_Priority_Queue(int Number_Values_r, bool Max_Values_r)
{
    Array = new int[1];
    length = 1;
    index = 0;
    Max_Values = Max_Values_r;
    Number_Values = Number_Values_r;
}

Resizing_Array_Priority_Queue::~Resizing_Array_Priority_Queue()
{

}

void Resizing_Array_Priority_Queue::enqueue(int value)
{
    if(index == length) resize(2*length);
    if(index == 0)
    {
        Array[0] = value;
        index++;
    }   
    else
    {
        int i = 0;
        for(i; i < index; i++)
        {
            if(Compare(value, Array[i]))
            {
                Insert(i, value);
                if(index > Number_Values)  dequeue();
                break;
            }
        }
        if(i == index && i < Number_Values)
        {
            Array[i] = value;
            index++;
        } 
    }
    
    
}

void Resizing_Array_Priority_Queue::Insert(int pos, int value)
{
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
    index++;
}

bool Resizing_Array_Priority_Queue::Compare(int value, int compare)
{
    return Max_Values == true ? (value > compare ? true : false) : (value < compare ? true : false);
}

int Resizing_Array_Priority_Queue::dequeue()
{
    int item = Array[--index];
    Array[index] = -1;
    if(index > 0 && index == length/4) resize(length/2);
    return item;
}

void Resizing_Array_Priority_Queue::resize(int capacity)
{
    length = capacity;
    int *new_Array = new int[length];
    for(int i = 0; i < index; i++)  new_Array[i] = Array[i];
    Array = new_Array;
}

bool Resizing_Array_Priority_Queue::empty()
{
    return length == 1 && index == 0 ? true : false;
}
