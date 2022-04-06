#pragma once

#include <cassert>
#include <iostream>

template <typename T>
bool chcekIfSorted(T* tab, int size)
{
    for (int i = 1; i < size; ++i)
    {
        if (tab[i - 1] > tab[i])
        {
            return false;
        }
    }
    return true;
}