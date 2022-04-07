#pragma once

#include "utility.hpp"
#include "data.hpp"

// Cannot create template because bucketsort is sort known data

void bucketsort(Film* tab, int size)
{
    int n = 11;
    list<Film>* bucket = new list<Film>[n];

    for (int i = 0; i < size; ++i)
    {
        bucket[(int)tab[i].rate].addValue(tab[i]);
    }

    int j = 0;
    for (int i = 0; i < n; ++i)
    {
        list<Film>::Node* begin = bucket[i].getBegin();
        while (begin != NULL)
        {
            tab[j] = begin->value;
            ++j;
            begin = begin->next;
        }
    }
    delete[] bucket;
} 
