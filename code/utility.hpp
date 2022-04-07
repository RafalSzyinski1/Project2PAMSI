#pragma once

template <typename T>
void swap(T& lhs, T&rhs)
{
    T a = lhs;
    lhs = rhs;
    rhs = a;
}