#pragma once

#include <iostream>


template <typename T, typename U>
void iter(T *arr, int length , U func)
{
    int i = 0;
    while (i < length)
    {
        func(arr[i]);
        i++;
    }
}

template <typename T>
void plus(T &c)
{
    std::cout << c << " ---- > Im here plus Ultra " << std::endl;
}
