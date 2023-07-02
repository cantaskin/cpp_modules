#include "Bureacrat.h"
#include "Form.h"
int main()
{
    Bureaucrat a;
    Form F1;
    Bureaucrat b("Lale",3);
    Bureaucrat c("Zodyak",400);
    std::cout << a.getname() << " " << a.getgrade() << "\n";
    std::cout << b.getname()<< " " << b.getgrade() << "\n" << c.getname() << " " << c.getgrade() << "\n";  
    b++;
    std::cout << b.getname() << " " << b.getgrade() << "\n";
    c.setgrade(-100);
    std::cout << c.getname() << " " << c.getgrade() << "\n";
}