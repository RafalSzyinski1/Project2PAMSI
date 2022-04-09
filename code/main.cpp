#include "benchmark/bucketsortBenchmark.hpp"
#include "benchmark/introsortBenchmark.hpp"
#include "benchmark/mergesortBenchmark.hpp"
#include "benchmark/heapsortBenchmark.hpp"
#include "benchmark/insertsortBenchmark.hpp"
#include "benchmark/quicksortBenchmark.hpp"

int main()
{
    printf("Bucketsort\n");
    Bucketsort::bench();
    printf("Introsort\n");
    Introsort::bench();
    printf("Mergesort\n");
    Mergesort::bench();
    printf("Heapsort\n");
    Heapsort::bench();
    printf("Insertsort\n");
    Insertsort::bench();
    printf("Quicksort\n");
    Quicksort::bench();
    return 0;
}