#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
class Replace
{
private:
    std::string _filename;
    std::string _search;
    std::string _replace;
public:
    void set_variable(std::string file, std::string s1, std::string s2);
    Replace(void);
    ~Replace(void);
    int ft_replace(void);
    std::string replace_str(std::string line);
    std::string other_replace(int start, std::string line);
};


#endif