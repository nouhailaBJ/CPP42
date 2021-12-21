#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
T max(T x, T y)
{
    if (x == y)
        return (y);
    return (x > y ? x : y);
}

template <typename T>
T min(T x, T y)
{
    if (x == y)
        return (y);
    return (x < y ? x : y);
}

template <typename T>
void swap(T &x, T &y)
{
    T tmp;

    tmp = x;
    x = y;
    y = tmp;
}

#endif