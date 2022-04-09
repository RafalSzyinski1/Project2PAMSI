#pragma once

#include "benchmark/benchmark.hpp"
#include "bucketsort.hpp"
#include "data.hpp"

namespace Bucketsort
{

void bench1()
{
    long long data_size = 10000;
    auto data = getData(data_size);
    long long time = benchmark([&](){bucketsort(data, data_size);});
    printf("Benchmark 1: Data Size=%lld, Time=%lldms\n", data_size, time);
}

void bench2()
{
    long long data_size = 100000;
    auto data = getData(data_size);
    long long time = benchmark([&](){bucketsort(data, data_size);});
    printf("Benchmark 2: Data Size=%lld, Time=%lldms\n", data_size, time);
}

void bench3()
{
    long long data_size = 500000;
    auto data = getData(data_size);
    long long time = benchmark([&](){bucketsort(data, data_size);});
    printf("Benchmark 3: Data Size=%lld, Time=%lldms\n", data_size, time);
}

void bench4()
{
    long long data_size = 1000000;
    auto data = getData(data_size);
    long long time = benchmark([&](){bucketsort(data, data_size);});
    printf("Benchmark 4: Data Size=%lld, Time=%lldms\n", data_size, time);
}

void bench()
{
    bench1();
    bench2();
    bench3();
    bench4();
}

}