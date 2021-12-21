#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    // Animal test;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    i->makeSound();
    j->makeSound();

    delete i;
    delete j;
    return (0);
}