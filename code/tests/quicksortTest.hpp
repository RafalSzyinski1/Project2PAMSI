#pragma once
#include <cassert>
#include <cstdio>

#include "quicksort.hpp"
#include "tests/sortTest.hpp"

namespace Quicksort
{

// Simple test
void test1()
{
    int tab[] = {6, 5, 4, 3, 2, 1};
    quicksort(tab, 0, 5);
    assert(chcekIfSorted(tab, 6));
    printf("TEST1 GOOD\n");
}

// All zero test and one -1
void test2()
{
    int tab[] = {0, 0, 0, 0, 0, 0, -1};
    quicksort(tab, 0, 6);
    assert(chcekIfSorted(tab, 7));
    printf("TEST2 GOOD\n");
}

// All random
void test3()
{
    int tab[10];
    for (int i = 0; i < 10; ++i)
        tab[i] = rand();
    quicksort(tab, 0, 9);
    assert(chcekIfSorted(tab, 10));
    printf("TEST3 GOOD\n");
}

// All random, Big, with also value < 0
void test4()
{
    int size = 1000000;
    int tab[size];
    for (int i = 0; i < size; ++i)
        tab[i] = rand() - (RAND_MAX / 2);
    quicksort(tab, 0, size - 1);
    assert(chcekIfSorted(tab, size));
    printf("TEST4 GOOD\n");
}

void test()
{
    test1();
    test2();
    test3();
    test4();
}

}