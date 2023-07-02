#include "Bureacrat.h"

   Bureaucrat::Bureaucrat(){
        m_name = "Can";
        m_grade = 1;
    }
    Bureaucrat::Bureaucrat(std::string name , int grade)
    {
        std::cout << grade << " grade\n";
        setgrade(grade);
        setname(name);
    }
    Bureaucrat::~Bureaucrat(){}
    Bureaucrat::Bureaucrat(Bureaucrat &cpy)
    {
        m_name = cpy.m_name;
        m_grade = cpy.m_grade;
    }
    Bureaucrat &Bureaucrat::operator=(Bureaucrat &cpy)
    {
        if(this == &cpy)
            return *this;
        m_name = cpy.m_name;
        m_grade = cpy.m_grade;
        return *this;
    }
    std::string Bureaucrat::getname(){return m_name;}
    int Bureaucrat::getgrade(){return m_grade;}
    void Bureaucrat::setname(std::string name){m_name = name;}
    void Bureaucrat::setgrade(int grade)
    {

        try
        {
            if(grade > 150)
            {
                m_grade = 150;
                throw GradeTooHighException();
            }
            else if(grade < 1)
            {
               m_grade = 1;
               throw GradeTooLowException();
            }
            else 
                m_grade = grade;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << "\n";
        }
    }    
    Bureaucrat &Bureaucrat::operator++()
    {
        setgrade(getgrade() + 1);
        return *this;
    }
    Bureaucrat Bureaucrat::operator++(int)
    {
        Bureaucrat temp = *this;
        setgrade(getgrade() + 1);
        return temp;
    }
    std::ostream &operator<<(std::ostream &os, Bureaucrat &obj)
{
    return os << obj.getname() << " " << obj.getgrade() << "\n";
}