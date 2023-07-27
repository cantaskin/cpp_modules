#include "AForm.h"
#include "Bureaucrat.h"

AForm::AForm()
{
    m_name = "Can";
    m_signed = false;
    grade_exec = 100;
    grade_sign = 101;
}
AForm::AForm(std::string name, bool _signed, int sign, int exec) : m_name(name) , m_signed(_signed)
{
    setsign(sign);
    setexec(exec);
}
AForm::AForm(AForm &cpy)
{
    m_name = cpy.m_name;
    m_signed = cpy.m_signed;
    grade_sign = cpy.grade_sign;
    grade_exec = cpy.grade_exec;
}
AForm::~AForm(){}
AForm & AForm::operator=(AForm &cpy)
{
    if(this == &cpy)
        return *this;
    m_name = cpy.m_name;
    m_signed = cpy.m_signed;
    grade_sign = cpy.grade_sign;
    grade_exec = cpy.grade_exec;
    return *this;
}
void AForm::setname(std::string name)
{
    m_name = name;
}
void AForm::setsign(int sign)
{
    try
    {
        if(sign > 150)
        {
            grade_sign = 150;
            throw GradeTooLowException();
        }
        else if(sign < 1)
        {
            grade_sign = 1;
            throw GradeTooHighException();
        }
        else
            grade_sign = sign;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << "\n";
    }
}
void AForm::setexec(int sign)
{
    try
    {
        if(sign > 150)
        {
            grade_exec = 150;
            throw GradeTooLowException();
        }
        else if(sign < 1)
        {
            grade_exec = 1;
            throw GradeTooHighException();
        }
        else
            grade_exec = sign;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << "\n";
    }
}
bool AForm::beSigned(Bureaucrat &obj)
{
    try
    {
        if(obj.getgrade() <= getsign())
        {
            m_signed = true;
            return true;
        }
        else
        {
            throw GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
         std::cout << e.what() << "\n";
            return false;
    }
}
bool AForm::beExecuted(Bureaucrat &obj)
{
    try
    {
        if(obj.getgrade() <= getexec() && getsigned())
        {
            return  m_executed = true;
        }
        else
        {
            throw GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
         std::cout << e.what() << "\n";
    }
    return false;
}
std::string AForm::getname(){return m_name;}
bool AForm::getsigned(){return m_signed;}
bool AForm::getexecuted(){return m_executed;}
int AForm::getsign(){return grade_sign;}
int AForm::getexec(){return grade_exec;}