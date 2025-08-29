#include <iostream>
#include "inc/SDL.h"

#include <random>
#include <ranges>
#include <algorithm>

#include <vector>

#undef main


int main()
{
    
    std::random_device rd;
    std::uniform_int_distribution d(1,99);

    // Populating vector with random numbers .. //

    std::vector<int> v;

    for (int i = 0; i < 200; i++)
    {
        v.push_back(d(rd));
    }


    // Sorting Algorithm (Selection Sort)// 

    for (unsigned int i = 0; i < v.size(); i++)
    {
        for (unsigned int j = i; j < v.size(); j++)
        {
            if (v[j] < v[i])
            {
                std::swap(v[j], v[i]);
            }
        }
    }

    for (int i: v)
    {
        std::cout << i << " ";
    }

    return 0;
}