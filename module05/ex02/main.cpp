#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequest.h"
#include "ShrubberyCreationForm.h"

int main()
{
    AForm* Form;

    Bureaucrat B1;
    for(int i = 0; i < 10; i++)
    {
        if( i % 3 == 0)
            Form[i] = new PresidentialPardonForm;
        else if(i % 2 == 0)
            Form[i] = new RobotomyRequest;
        else
            Form[i] = new ShrubberyCreationForm;
        Form[i]->execute(B1);
    }
}