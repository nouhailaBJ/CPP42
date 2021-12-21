#include <iostream>
#include <ctype.h>
#include <cstring>
#include <limits>

void convert_char(char *str)
{
	try
	{
		if (str[0] && strlen(str) == 1 && isalpha(str[0]))
		{
			std::cout << "char: '" << str << "'" << std::endl;
			return ;
		}
		char c = static_cast<char>(std::stoi(str));
		if (isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "char: impossible" << std::endl;
	}
}
bool is_number(char *str)
{
	for (int i = 0; str[i]; i++)
		if (std::isdigit(str[i]) == 0) return false;
	return true;
}

void convert_int(char *str)
{
	try
	{
		if (str[0] && strlen(str) == 1 && isalpha(str[0]))
		{
			std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
			return ;
		}
		int nb = static_cast<int>(std::stoi(str));
		std::cout << "int: " << nb << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "int: impossible" << std::endl;
	}
	
}

void convert_float(char *str)
{
	try
	{
		if (str[0] && strlen(str) == 1 && isalpha(str[0]))
		{
			std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
			return ;
		}
		float nb = static_cast<float>(std::stof(str));
		if (nb == std::numeric_limits<float>::infinity())
			std::cout << "float: " << "+inff" << std::endl;
		else if ((long double)nb == (int)nb)
        	std::cout << "float: " << nb << ".0f" << std::endl;
		else
			std::cout << "float: " << nb << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "float: nanf" << std::endl;
	}
}

void convert_double(char *str)
{
	try
	{
		if (str[0] && strlen(str) == 1 && isalpha(str[0]))
		{
			std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
			return ;
		}
		double nb = static_cast<double>(std::stod(str));
		if (nb == std::numeric_limits<float>::infinity())
			std::cout << "double: " << "+inf" << std::endl;
		else if ((long double)nb == (int)nb)
        	std::cout << "double: " << nb << ".0" << std::endl;
		else
			std::cout << "double: " << nb  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "double: nan" << std::endl;
	}
}

void scalar_conversion(char *str)
{
	convert_char(str);
	convert_int(str);
	convert_float(str);
	convert_double(str);
}

int main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Error: invalid Arguments! \n";
	else
		scalar_conversion(av[1]);
	return (0);
}