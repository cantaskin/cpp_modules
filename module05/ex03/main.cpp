#include "PresidentialPardonForm.h"
#include "RobotomyRequest.h"
#include "Intern.h"
#include "Bureaucrat.h"
#include "AForm.h"

int main()
{
	try{
		Bureaucrat Bureau1("Canan",31);
		Bureaucrat Bureau2();
		Intern Intern1;
		AForm* F1;

		F1 = Intern1.makeForm("robotomy request", "Law Papers");
		F1->execute(Bureau1);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << "\n";
	}
}