#ifndef RESIZING_ARRAY_sYMBOL_TABLE_h
#define RESIZING_ARRAY_Symbol_Table_H
#include <iostream>

struct node
{
    std::string key;
    int value;
    bool Null = true;
};

class Resizing_Array_Symbol_Table
{
    private:
        node *symbol_table;
        int length;
        int index;
        int change;

    public:
        Resizing_Array_Symbol_Table();
        ~Resizing_Array_Symbol_Table();
        void push(std::string key, int value);
        void pop(std::string);
        void resize(int capacity);
        bool empty();
        bool exist(std::string key);
        static void display(Resizing_Array_Symbol_Table *R_ST)
        {
            if(R_ST->empty()) 
            {
                std::cout << "Empty" << std::endl;
                return;
            }
            for(int i = 0; i < R_ST->index; i++)
            {
                if(R_ST->symbol_table[i].Null == false)
                {
                    std::cout << R_ST->symbol_table[i].key << ": " << R_ST->symbol_table[i].value << ",  "; 
                }
            }
        }
        /*
        static void concatenate(Resizing_Array_Symbol_Table *Array_a, Resizing_Array_Symbol_Table *Array_b)
        {
            if(Array_a->empty())    Array_a->Array = Array_b->Array;
            if(!Array_b->empty())
            {
                for(int i = 0; i < Array_b->index; i++)     Array_a->push(Array_b->Array[i]);
            }
        }
        static void delete_Array(Resizing_Array_Symbol_Table *R_Array)
        { 
            R_Array->Array = new int[1];
            R_Array->length = 1;
            R_Array->index = 0;
            std::cout << "Array deleted" << std::endl;
        }*/

};

#endif