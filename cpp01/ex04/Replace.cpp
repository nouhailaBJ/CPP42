#include "Replace.hpp"

Replace::Replace(void)
{
}

Replace::~Replace(void)
{
}
std::string Replace::other_replace(int start, std::string line)
{
    std::string n_line;

    n_line = line.substr(0, start);
    n_line += _replace;
    start += _search.length();
    n_line += line.substr(start);
    return n_line;
}

std::string Replace::replace_str(std::string line)
{
    int pos = 0;
    while ((pos = line.find(_search, pos)) != (int)std::string::npos)
    {
        line = other_replace(pos, line);
        pos += _replace.length();
    }
    return line;
}

int Replace::ft_replace(void)
{
    std::string line;
    std::ifstream file(_filename);
    std::ofstream replace_f;

    if (!_search.length() || !_replace.length() || !_filename.length())
    {
        std::cout << "Error : The Arguments should not be Empty ! Try Again\n";
        return (EXIT_FAILURE);
    }
    if (file.is_open())
    {
        replace_f.open(_filename+".replace", std::ios::trunc);
        if (!replace_f.is_open()) 
            std::cout << "Unable to open the file\n";
        while (getline(file, line))
            replace_f << replace_str(line) << "\n";
        file.close();
    }
    else
        std::cout << "Unable to open the file\n";
    replace_f.close();
    return (EXIT_SUCCESS);
}

void Replace::set_variable(std::string file, std::string s1, std::string s2)
{
    _filename = file;
    _search = s1;
    _replace = s2;
}