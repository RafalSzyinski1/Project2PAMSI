#pragma once
#include <cmath>
#include "utility.hpp"

#include "heapsort.hpp"
#include "insertsort.hpp"
#include "quicksort.hpp"

// Intro sort
template <typename T>
void introsortutil(T* tab,int p,int r, int deepthThroat){
    int size=r-p+1;
    if (size<16){
        insertsort(tab + p, size);
        return;
    }
    if(deepthThroat == 0){
        heapsort(tab + p, size);
        return;
    }

    int q = randomized_partition(tab, p, r);
    introsortutil(tab, p, q - 1, deepthThroat - 1);
    introsortutil(tab, q + 1, r, deepthThroat - 1);
}

template <typename T>
void introsort(T* tab, int p, int r)
{
    int depthLimit = 2*log(r-p);
    introsortutil(tab,p,r,depthLimit);
}
