#include "Span.hpp"
#include <climits>
#include  <cstdlib> 

int main()
{
    Span sp = Span(5);
    sp.AddNumber(6);
    sp.AddNumber(3);
    sp.AddNumber(17);
    sp.AddNumber(9);
    sp.AddNumber(11);
    std::cout << NumberToString(sp.ShortestSpan()) << "\n";
    std::cout << NumberToString(sp.LongestSpan()) << "\n";

    try
    {
        sp.AddNumber(12);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << "\n";
    }

    Span sp2 = Span(10000);
    std::vector<int> v;
    for (size_t i = 0; i < 10200; i++)
    {
        v.push_back(std::rand() % INT_MAX);
    }
    try
    {
        sp2.AddNumber(v.begin(), v.end());
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << NumberToString(sp2.ShortestSpan()) << "\n";
    std::cout << NumberToString(sp2.LongestSpan()) << "\n";
    return 0;
}