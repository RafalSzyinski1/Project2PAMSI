#pragma once

#include "benchmark/benchmark.hpp"
#include "mergesort.hpp"
#include "data.hpp"

void bench1()
{
    long long data_size = 10000;
    auto data = getData(data_size);
    long long time = benchmark([&](){mergesort(data, 0, data_size - 1);});
    printf("Benchmark 1: Data Size=%lld, Time=%lldms\n", data_size, time);
}

void bench2()
{
    long long data_size = 100000;
    auto data = getData(data_size);
    long long time = benchmark([&](){mergesort(data, 0, data_size - 1);});
    printf("Benchmark 2: Data Size=%lld, Time=%lldms\n", data_size, time);
}

void bench3()
{
    long long data_size = FILTRED_DATA_SIZE;
    auto data = getData(data_size);
    long long time = benchmark([&](){mergesort(data, 0, data_size - 1);});
    printf("Benchmark 3: Data Size=%lld, Time=%lldms\n", data_size, time);
}

void mergesortBenchmark()
{
    bench1();
    bench2();
    bench3();
}