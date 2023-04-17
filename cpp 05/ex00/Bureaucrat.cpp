#include "Bureaucrat.hpp"

    Bureaucrat::Bureaucrat()
    {
        std::cout << "Default Ctor\n";
    }
    Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(const_cast<std::string &>(name)) , m_grade(grade) 
    {
        std::cout << "Ctor\n";
    }

    Bureaucrat::Bureaucrat(const Bureaucrat &other) : m_name(other.m_name) , m_grade(other.m_grade) 
    {
        std::cout << "Copy Ctor\n";
    }
    Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
    {
        std::cout << "Copy Assignment\n";
        if(this == &other)
            return *this;
        const_cast<std::string &>(m_name) = other.m_name;
        m_grade = other.m_grade;
        return *this;
    }
    Bureaucrat::~Bureaucrat()
    {
        std::cout << "Dtor\n";
    }

    int Bureaucrat::getGrade() const
    {
        return m_grade;
    }

    std::string Bureaucrat::getName() const
    {
        return m_name;
    }

    void Bureaucrat::setGrade(int grade)
    {
        if(grade > 0 && grade < 151)
        {
            m_grade = grade;
        }
        else if(grade > 150)
        {
            m_grade = 0;
            throw Bureaucrat::GradeTooLowException();
    
        }
        else
        {
            m_grade = 0;;
            throw Bureaucrat::GradeTooHighException();
        }
    }

    const char *Bureaucrat::GradeTooLowException::what() const throw()
    {
        return "Too Low Grade";
    }
    const char *Bureaucrat::GradeTooHighException::what() const throw()
    {
        return "Too High Grade";
    }

    void Bureaucrat::decrement()
    {
        setGrade(m_grade + 1);
    }

    void Bureaucrat::increment()
    {
        setGrade(m_grade - 1);
    }

    std::ostream &operator<<(std::ostream &os, Bureaucrat &Big)
    {
        return os << Big.getName() << ' ' << Big.getGrade();
    }