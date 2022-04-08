#include "tests/heapsortTest.hpp"
#include "benchmark/heapsortBenchmark.hpp"
int main()
{
    Heapsort::test();
    Heapsort::bench();
    return 0;
}