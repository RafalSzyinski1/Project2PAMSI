#pragma once

#include <cassert>
#include <fstream>
#include <regex>

template <typename T>
void swap(T& lhs, T&rhs)
{
    T a = lhs;
    lhs = rhs;
    rhs = a;
}

struct Film
{
    int Lp;
    const char* name;
    float rate;
};

Film* getData(int size)
{
    Film* films = new Film[size];
    std::ifstream in("data.csv");
    assert(in.is_open());
}