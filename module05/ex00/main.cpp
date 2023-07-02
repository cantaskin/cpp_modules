#include "Bureacrat.h"

int main()
{
    Bureaucrat a;
    Bureaucrat b("Lale",3);
    Bureaucrat c("Zodyak",400);
    std::cout << a;
    std::cout << b;
    b++;
    std::cout << b;
    c.setgrade(-100);
    std::cout << c;
    std::cout << ++c;
}