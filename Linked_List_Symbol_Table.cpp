#include "Linked_List_Symbol_Table/Linked_List_Symbol_Table.h"
#include <iostream>


int main()
{
    Linked_List_Symbol_Table ST;
    ST.push("A", 1);
    ST.push("B", 2);
    ST.push("C", 3);
    ST.push("D", 4);
    ST.push("E", 5);
    Linked_List_Symbol_Table::display(&ST);

    ST.push("C", 100);
    ST.push("A", 10);
    ST.push("E", 50);
    Linked_List_Symbol_Table::display(&ST);

    //ST.pop("B");
    //ST.pop("D");
    //Linked_List_Symbol_Table::display(&ST);

    return 0;
}
