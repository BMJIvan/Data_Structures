#include <iostream>
#include <time.h>
#include <math.h>

void show_binary_tree(int *array, int nb_data);

int main()
{
    
    std::cout<<std::endl<<"inicio programa"<<std::endl;

    for(int i = 1; i < 50; i += 3)
    {
        int *Array = new int[i];
        for(int j = 0; j < i; j++)
        {
            Array[j] = j;
            std::cout<<Array[j]<<",";
        }
        std::cout<<std::endl;
    }
    return 0;
}

