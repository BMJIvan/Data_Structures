#ifndef Symbol_Table_H
#define Symbol_Table_H
#include <cstdlib>

class Symbol_Table
{
    private:
        int key;

    public:
        Symbol_Table();

    private:
        bool contains(int, int);
        void delete_key();

};

#endif