#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <sstream>
#include <vector>
#include <iostream>

class Span
{

    std::vector<int> _ivec;
    size_t _len;
    
    public:
    
    Span(size_t N);
    Span(const Span &copy);
    Span &operator=(const Span &obj);
    void AddNumber(int N);
    void AddNumber(std::vector<int>::iterator begin,std::vector<int>::iterator end);
    unsigned int ShortestSpan();
    unsigned int LongestSpan();

     class ContainerFullException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Container full!";
        }
    };
};


template <typename T>
  std::string NumberToString ( T Number )
  {
     std::ostringstream ss;
     ss << Number;
     return ss.str();
  }


#endif