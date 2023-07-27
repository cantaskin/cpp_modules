#include "Span.hpp"
#include <algorithm>
Span::Span(size_t N) : _len(N) {}

Span::Span(const Span &copy) : _ivec(copy._ivec), _len(copy._len) {}

Span &Span::operator=(const Span &obj)
{
    if(this == &obj)
        return *this;
    _ivec = obj._ivec;
    _len = obj._len;
    return *this;
}
void Span::AddNumber(int N)
{
    if(_ivec.size() < _len)
        _ivec.push_back(N);
    else
        throw ContainerFullException();
}
void Span::AddNumber(std::vector<int>::iterator begin,std::vector<int>::iterator end)
{
    int dist = std::distance(begin,end);
    if(dist < (_ivec.size() - _len))
    {
        for(;begin != end; begin++)
        {
            _ivec.push_back(*begin);
        }
    }
    else 
        throw ContainerFullException();


}
unsigned int Span::ShortestSpan()
{
    std::sort(_ivec.begin(), _ivec.end());
    int min = *(_ivec.begin() + 1) - *_ivec.begin();
    for(std::vector<int>::iterator it = _ivec.begin(); it != (_ivec.end() -1) ; it++)
    {
        if(min < *(it + 1) - *it)
            min = *(it + 1) - *it;
    }
    return min;
}
unsigned int Span::LongestSpan()
{
    std::sort(_ivec.begin(), _ivec.end());
    return (*_ivec.end() - *_ivec.begin());
}