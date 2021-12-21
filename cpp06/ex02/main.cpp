#include "Base.hpp"

Base * generate(void)
{
	A a;
	B b;
	C c;
	int ran = rand() % 3;
	if (ran == 0)
		return (new A());
	else if (ran == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Not found\n";
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(...){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(...){}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(...){}
}

int main()
{
	Base *base = generate();

    std::cout << "Base *p" << std::endl;
    identify(base);
    std::cout << "Base &p" << std::endl;
    identify(*base);
}