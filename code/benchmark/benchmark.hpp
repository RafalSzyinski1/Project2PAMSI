#pragma once

#include <chrono>

template <typename Func>
long long benchmark(Func fn)
{
    auto start = std::chrono::high_resolution_clock::now();
    fn();
    auto end = std::chrono::high_resolution_clock::now();

    return std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
}