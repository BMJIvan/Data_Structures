#include "Resizing_Array_Symbol_Table/Resizing_Array_Symbol_Table.h"
#include <iostream>


int main()
{
    Resizing_Array_Symbol_Table ST;
    ST.push("A", 1);
    ST.push("B", 2);
    ST.push("C", 3);
    ST.push("D", 4);
    ST.push("E", 5);
    Resizing_Array_Symbol_Table::display(&ST);

    ST.push("C", 100);
    ST.push("A", 10);
    ST.push("E", 50);
    Resizing_Array_Symbol_Table::display(&ST);

    ST.pop("B");
    ST.pop("D");
    Resizing_Array_Symbol_Table::display(&ST);

    return 0;
}
