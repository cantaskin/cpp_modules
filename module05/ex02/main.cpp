#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

int main()
{
    AForm* Form[10];
    Bureaucrat C("Can",-100);
    Bureaucrat B("B",35);
    Bureaucrat H("H",100);

    for(int i = 0; i < 10; i++)
    {
        if( i % 3 == 0)
            Form[i] = new PresidentialPardonForm();
        else if(i % 2 == 0)
            Form[i] = new RobotomyRequest();
        else
            Form[i] = new ShrubberyCreationForm();
    }

    for(int i = 0; i < 10 ; i++)
    {
        if(i % 3 == 1)
            C.signForm(*Form[i]);
        else if(i % 3 == 2)
            B.signForm(*Form[i]);
        else
            H.signForm(*Form[i]);
    }
    
    for(int i = 0; i< 10 ; i++)
    {
        if(i % 3 == 1)
        {
            C.executeForm(*Form[i]);
            if(Form[i]->getexecuted())
                Form[i]->execute(C);
        }
        else if(i % 3 == 2)
        {
            B.executeForm(*Form[i]);
            if(Form[i]->getexecuted())
                Form[i]->execute(B);
        }
        else
        {
            H.executeForm(*Form[i]);
            if(Form[i]->getexecuted())
                Form[i]->execute(H);
        }
    }
}
