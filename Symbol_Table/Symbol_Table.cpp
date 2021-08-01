#include "Symbol_Table.h"

bool Symbol_Table::contains(int key)
{
    return get(key) != Null;
}

Symbol_Table::delete_key(int key)
{
    put(key, Null);
}