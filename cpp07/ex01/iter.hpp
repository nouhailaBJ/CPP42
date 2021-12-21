#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void iter(T *arr, int size, void func(T const &))
{
    int i;

    i = 0;
    while (i < size)
    {
        func(arr[i]);
        i++;
    }
}
template <typename T>
void ft_print(T const &arr)
{
    std::cout << arr << std::endl;
}
#endif