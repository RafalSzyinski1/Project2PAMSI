#pragma once

#include <cassert>
#include <cstdio>
#include <cstring>

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
    float rate;
    char name[256];
    
    bool operator<(const Film& rhs) {return rate<rhs.rate;};
    bool operator>(const Film& rhs) {return rate>rhs.rate;};
    bool operator<=(const Film& rhs) {return rate<=rhs.rate;};
    bool operator>=(const Film& rhs) {return rate>=rhs.rate;};
};

Film* getData(int size)
{
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