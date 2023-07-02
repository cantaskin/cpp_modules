#include "Form.h"
#include "Bureacrat.h"

Form::Form()
{
    m_name = "Can";
    m_signed = 0;
    grade_exec = 2;
    grade_sign = 1;
}
Form::Form(std::string name, bool _signed, int sign, int exec) : m_name(name) , m_signed(_signed)
{
    setsign(sign);
    setexec(exec);
}
Form::Form(Form &cpy)
{
    m_name = cpy.m_name;
    m_signed = cpy.m_signed;
    grade_sign = cpy.grade_sign;
    grade_exec = cpy.grade_exec;
}
Form::~Form(){}
Form &Form::operator=(Form &cpy)
{
    if(this == &cpy)
        return *this;
    m_name = cpy.m_name;
    m_signed = cpy.m_signed;
    grade_sign = cpy.grade_sign;
    grade_exec = cpy.grade_exec;
    return *this;
}
void Form::setname(std::string name)
{
    m_name = name;
}
void Form::setsign(int sign)
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
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << "\n";
    }
}
void Form::setexec(int sign)
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
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << "\n";
    }
}
void Form::beSigned(Bureacrat &obj)
{
    try
    {
        if(obj.getgrade() <= getsign())
        {
            m_signed = true;
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
    
}
std::string Form::getname(){return m_name;}
bool Form::getsigned(){return m_signed;}
int Form::getsign(){return grade_sign;}
int Form::getexec(){return grade_exec;}