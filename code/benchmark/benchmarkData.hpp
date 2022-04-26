#pragma once

#include "benchmark/benchmark.hpp"
#include "data.hpp"


namespace Data
{

// Read 10000 data
void bench1()
{
    long long data_size = 10000;
    Film* data;
    long long time = benchmark([&data, &data_size](){data = getData(data_size);});
    printf("Benchmark 1: Data Size=%lld, Time=%lldms\n", data_size, time);
}

// Read 100000 data
void bench2()
{
    long long data_size = 100000;
    Film* data;
    long long time = benchmark([&data, &data_size](){data = getData(data_size);});
    printf("Benchmark 2: Data Size=%lld, Time=%lldms\n", data_size, time);
}

// Read 500000 data
void bench3()
{
    long long data_size = 500000;
    Film* data;
    long long time = benchmark([&data, &data_size](){data = getData(data_size);});
    printf("Benchmark 3: Data Size=%lld, Time=%lldms\n", data_size, time);
}
// Read 1000000 data
void bench4()
{
    long long data_size = 1000000;
    Film* data;
    long long time = benchmark([&data, &data_size](){data = getData(data_size);});
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