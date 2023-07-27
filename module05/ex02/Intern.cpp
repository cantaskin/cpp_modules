#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequest.h"
#include "ShrubberyCreationForm.h"
#include "Intern.h"

Intern::Intern(){}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
}

Intern Intern::operator=(Intern const &cpy)
{
	return(*this);
}

Intern::~Intern(){}

AForm *Intern::makeForm(std::string const &name, std::string const &target)
{
    std::string arr[3] = {"shrubbery","robotomy request", "presidential pardon"};
    AForm *(*foo[3])(std::string const &target);

    foo[0] = &makeShrubberyForm;
    foo[1] = &makeRobotomyRequestForm;
    foo[2] = &makePresidentialPardonForm;

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == name)
        {
            std::cout << "Intern make " + arr[i] << "\n";
            return(foo[i](target));
        }
    }
    throw CantMakeForm();
}

AForm *makeShrubberyForm(const std::string &target)
{
    return (new ShrubberyCreationForm(0,target));
}

AForm *makeRobotomyRequestForm(const std::string &target)
{
    return (new RobotomyRequest(0,target));
}

AForm *makePresidentialPardonForm(const std::string &target)
{
    return (new PresidentialPardonForm(0,target));
}