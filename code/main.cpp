#include "tests/quicksortTest.hpp"
#include <iostream>
int main()
{
    int datasize = 100000;
    auto a = getData(datasize);
    quicksort(a, 0, datasize - 1);
    for (int i = 0; i < datasize; ++i)
    {
        std::cout << a[i].Lp << " " << a[i].name << " " << a[i].rate << std::endl;
    }
    return 0;
}