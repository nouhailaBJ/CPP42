#include "Serialization.hpp"

uintptr_t serialize(Data *ptr)
{
    uintptr_t ret;

    ret = reinterpret_cast<uintptr_t>(ptr);
    return (ret);
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data *ptr = new Data();
    
    ptr->x = 10;
    ptr->y = 20;
    uintptr_t ser = serialize(ptr);
    printf("%ld\n", ser);

    Data *ptr2 = deserialize(ser);
    printf("%d\n", ptr2->x);
    delete ptr;
    return (0);
}