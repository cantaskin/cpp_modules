#include "Bureaucrat.h"
#include "Form.h"
int main()
{
    Bureaucrat a;
    Form F1;
    Bureaucrat b("Lale",3);
    Bureaucrat c("Zodyak",400);
    std::cout << a;
    std::cout << b; 
    b++;
    std::cout << c;
    c.setgrade(-100);
    std::cout << c;
    std::cout << ((F1.getsigned()) ? " Imzanlandı\n": " Imzalanmadı\n");
    b.signForm(F1);
    std::cout << ((F1.getsigned()) ? " Imzanlandı\n": " Imzalanmadı\n");
}
