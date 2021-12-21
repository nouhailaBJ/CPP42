#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>

template<typename T>
class Array
{
    public:
        Array()
        { 
            arr = new int();
        }
        Array(unsigned int n): _n(n){
            arr = new int[_n];
        }
        Array(Array const &src) { *this = src; }
        Array & operator=(Array const &rhs)
        { 
            _n = rhs._n;
            arr = new int[_n];
            return (*this);
        }
        T & operator[](unsigned int idx)
        {
            if (idx >= _n)
                throw OutOfLimits();
            return (arr[idx]);
        }
        ~Array() {}
        int size(void) { return (this->_n); }
        class OutOfLimits: public std::exception
        {
            public:
                virtual const char* what() const throw(){
                    return ("This Element is out of the Limits.");
                }
        };
    private:
        T *arr;
        unsigned int _n;
};
#endif