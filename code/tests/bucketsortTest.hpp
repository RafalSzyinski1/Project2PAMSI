#pragma once
#include <cassert>
#include <cstdio>

#include "bucketsort.hpp"
#include "tests/sortTest.hpp"

namespace Bucketsort
{

// Test for small data size
void test1()
{
    auto data_size = 10;
    auto tab = getData(data_size);
    bucketsort(tab, data_size);
    assert(chcekIfSorted(tab, data_size));
    printf("TEST1 GOOD\n");
}

// Test for midium data size
void test2()
{
    auto data_size = 10000;
    auto tab = getData(data_size);
    bucketsort(tab, data_size);
    assert(chcekIfSorted(tab, data_size));
    printf("TEST2 GOOD\n");
}

// Test for all data
void test3()
{
    auto data_size = FILTRED_DATA_SIZE;
    auto tab = getData(data_size);
    bucketsort(tab, data_size);
    assert(chcekIfSorted(tab, data_size));
    printf("TEST3 GOOD\n");
}

void test()
{
    test1();
    test2();
    test3();
}

}