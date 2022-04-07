#pragma once

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define FILTRED_DATA_SIZE 385639

struct Film
{
    int Lp;
    float rate;
    char name[256];
    
    bool operator<(const Film& rhs) {return rate<rhs.rate;};
    bool operator>(const Film& rhs) {return rate>rhs.rate;};
    bool operator<=(const Film& rhs) {return rate<=rhs.rate;};
    bool operator>=(const Film& rhs) {return rate>=rhs.rate;};
};

Film* getData(int size)
{
    assert(size<=FILTRED_DATA_SIZE);
    Film* films = new Film[size];
    FILE* file = fopen("data.csv", "r");
    assert(file);
    char line[256];
    int lp;
    char* name;
    float rate;
    int i = 0;
    while (fgets(line, 256, file) && i < size)
    {
        lp = atoi(strtok(line, ","));
        name = strtok(NULL, ",");
        while (name != NULL && name[0] == '\"' && name[strlen(name) - 1] != '\"')
        {
            name = strcat(name, strtok(NULL, ","));
        }
        rate = atof(strtok(NULL, ","));
        if (name != NULL && rate != 0)
        {
            films[i].Lp = lp;
            films[i].rate = rate;
            strcpy(films[i].name, name);
            ++i;
        }
    }
    return films;
}

float meanRate(Film* tab, int size)
{
    double sum;
    for (int i = 0; i < size; ++i)
    {
        sum += tab[i].rate;
    }
    return sum / size;
}

// Data must be sorted
float medianRate(Film* tab, int size)
{
    if (size % 2 == 0)
    {
        return (tab[size / 2].rate + tab[(size / 2) + 1].rate) / 2;
    }
    else
    {
        return tab[(size / 2) + 1].rate;
    }
}