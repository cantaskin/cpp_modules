#pragma once

#include <string>
template <typename T>
class Array
{
    unsigned int _len;
    T *_arr;

    public:
    Array<T>() :  _len(0) 
    {
        _arr = new T[0];
    }
    Array<T>(size_t n):  _len(n) 
    {
        _arr = new T[n];
    }
    ~Array<T>(){ delete[] _arr; };
    Array<T>(const Array<T>& obj) { *this = obj;}
    Array<T> operator[](size_t index)
    {
        if(index > _len)
            throw OutofBoundAccessException();
        return _arr[index];
    }
    Array<T>& operator=(const Array<T>& obj)
    {
        if(this == &obj)
            return *this;
        _len = obj._len;
        delete[] _arr;
        _arr = new T[_len];
        for(size_t index = 0; index < obj._len; index++)
            _arr[index] = obj._arr[index];            

    }
    T *getArr()
    {
        return _arr;
    }
    unsigned int size() const { return (_len); };
    
    class OutofBoundAccessException : public std::exception
    {
        virtual const char *what() const throw()
        {
            return "Out of Bound Access!";
        }
    };
};

template <typename T>
std::ostream &operator<<(std::ostream &os, Array<T> &arr)
{
    for (size_t i = 0; i < arr.size(); i++)
    {
        os << arr.getArr()[i] << " ";
    }
    return os;
}