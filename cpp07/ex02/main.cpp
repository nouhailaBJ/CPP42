#include "Array.hpp"
#include <iostream>

int main()
{
    try
    {
        Array<int> arr(5);

        for (int i = 0; i < arr.size() + 1; i++)
        {
            arr[i] = i + 1;
            std::cout << arr[i] << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}