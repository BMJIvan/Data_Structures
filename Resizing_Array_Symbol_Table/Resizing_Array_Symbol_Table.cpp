#include "Resizing_Array_Symbol_Table.h"

Resizing_Array_Symbol_Table::Resizing_Array_Symbol_Table()
{
    symbol_table = new node[1];
    length = 1;
    index = 0;
}

Resizing_Array_Symbol_Table::~Resizing_Array_Symbol_Table()
{

}

void Resizing_Array_Symbol_Table::push(std::string key, int value)
{
    if(index == length) resize(2*length);
    if(exist(key))
    {
        symbol_table[change].value = value;
        symbol_table[change].Null = false;
        return;
    }
    symbol_table[index].key = key;
    symbol_table[index].value = value;
    symbol_table[index++].Null = false;
}

bool Resizing_Array_Symbol_Table::exist(std::string key)
{
    for(int i; i < index; i++)
    {
        if(key == symbol_table[i].key && symbol_table[i].Null == false) 
        {
            change = i;
            return true;
        }
    }
    return false;
}


void Resizing_Array_Symbol_Table::pop(std::string key)
{
    if(exist(key))
    {
        symbol_table[change].key = "";
        symbol_table[change].value = -1;
        symbol_table[change].Null = true;
    }
}

void Resizing_Array_Symbol_Table::resize(int capacity)
{
    length = capacity;
    node *new_symbol_table = new node[length];
    for(int i = 0; i < index; i++)
    {
        new_symbol_table[i].key = symbol_table[i].key;
        new_symbol_table[i].value = symbol_table[i].value;
        new_symbol_table[i].Null = symbol_table[i].Null;
    }  
    symbol_table = new_symbol_table;
}

bool Resizing_Array_Symbol_Table::empty()
{
    return length == 1 && index == 0 ? true : false;
}
