#ifndef INTERN_H
# define INTERN_H
#include <iostream>

class Intern
{
	public:
		Intern();
		Intern(const Intern &cpy);
		Intern operator = (const Intern &cpy);
		~Intern();

    class AForm *makeForm(std::string const &name, std::string const &target);

    class  CantMakeForm : public std::exception
    {
        virtual const char* what() const throw()
        {
            return "Not know\n";
        }
    };
};

class AForm *makeShrubberyForm(const std::string  &target);
class AForm *makeRobotomyRequestForm(const std::string &target);
class AForm *makePresidentialPardonForm(const std::string &target);
#endif
