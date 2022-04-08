#pragma once
#include <cassert>
#include <cstdio>

#include "heapsort.hpp"
#include "tests/sortTest.hpp"
#include "data.hpp"

namespace Heapsort
{

// Simple test
void test1()
{
    int tab[] = {6, 5, 4, 3, 2, 1};
    heapsort(tab, 6);
    assert(chcekIfSorted(tab, 6));
    printf("TEST1 GOOD\n");
}

// All zero test and one -1
void test2()
{
    int tab[] = {0, 0, 0, 0, 0, 0, -1};
    heapsort(tab, 7);
    assert(chcekIfSorted(tab, 7));
    printf("TEST2 GOOD\n");
}

// All random
void test3()
{
    int tab[10];
    for (int i = 0; i < 10; ++i)
        tab[i] = rand();
    heapsort(tab, 10);
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
    heapsort(tab, size);
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