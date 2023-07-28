#include "Bureaucrat.h"
#include "AForm.h"
   Bureaucrat::Bureaucrat(){
        m_name = "Can";
        m_grade = 1;
    }
    Bureaucrat::Bureaucrat(std::string name , int grade)
    {
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
    void Bureaucrat::signForm(AForm *obj)
    {
        if(!obj->getsigned()  && obj->beSigned(*this))
        {
            std::cout << getname() << " signed " << obj->getname() << "\n";
        }
        else
            std::cout << getname() << " couldn't sign " << obj->getname() << " because grade too low\n";

    }
    void Bureaucrat::executeForm(AForm *form)
    {
        if(form->beExecuted(*this))
        {
            std::cout << getname() << " signed " << form->getname() << "\n";
        }
        else
            std::cout << getname() << " couldn't execute " << form->getname() << " because grade too low\n";

    }
    std::ostream &operator<<(std::ostream &os, Bureaucrat &obj)
    {
        os << obj.getname();
        os << " ";
        os << obj.getgrade();
        os << "\n";
        return os;
    }

