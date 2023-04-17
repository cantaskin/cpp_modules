#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string m_name;
        int m_grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();
        void setGrade(int);
        int getGrade() const;
        std::string getName() const;
        void increment();
        void decrement();
     
     
        class GradeTooLowException : public std::exception 
        {
	        public:
		        virtual const char *what() const throw();
        };

        class GradeTooHighException : public std::exception 
        {
	        public:
		    virtual const char *what() const throw();
        };

};

std::ostream &operator<<(std::ostream &os, Bureaucrat &big);

#endif