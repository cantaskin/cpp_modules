#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>


class Bureaucrat
{
    public:
    Bureaucrat();
    Bureaucrat(std::string name , int grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat &cpy);
    Bureaucrat &operator=(Bureaucrat &cpy);
    std::string getname();
    int getgrade();
    void setname(std::string name);
    void setgrade(int grade);    
    Bureaucrat &operator++();
    Bureaucrat operator++(int);
    void signForm(class AForm *obj);
    void executeForm(AForm *form);
    
    private:
    class GradeTooLowException: public std::exception
    {
        virtual const char* what() const throw()
        {
            return "Too Low\n";
        }
    };

    class GradeTooHighException : public std::exception{
        virtual const char* what() const throw()
        {
            return "Too High\n";
        }
    };
    std::string m_name;
    int m_grade;
};
    std::ostream &operator<<(std::ostream &os, Bureaucrat &obj);
#endif