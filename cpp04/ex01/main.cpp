#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

// add const to object animal 
int main()
{
    int nb = 4;
    const Animal *halfs[nb];
    
    for(int i = 0; i < nb; i++)
    {
        if( i % 2 == 0)
            halfs[i] = new Dog();
        else
            halfs[i] = new Cat();
    }
    std::cout << "------ Animals half Dog and Cat   -----" << std::endl;
    for(int i = 0; i < nb; i++)
    {
       std::cout <<  halfs[i]->getType() << std::endl;
    }
    std::cout << "------ End Animals half Dog and Cat -----" << std::endl;
    for(int i = 0; i < nb; i++)
        delete halfs[i];

    const Animal* a1 = new Dog();
    const Animal* a2 = new Cat();
    delete a1;//should not create a leak
    delete a2;

    // std::cout << "------  Test -----" << std::endl;
    // Dog test;
    // {
    //     Dog tmp = test;
    // }
}