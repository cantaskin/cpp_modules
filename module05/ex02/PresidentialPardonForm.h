#ifndef PRESIDENTALPARDONFORM_H
# define  PRESIDENTALPARDONFORM_H
#include "AForm.h"

class PresidentialPardonForm : public AForm
{
    public:

        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &Form);
        PresidentialPardonForm(bool _signed, std::string target);
        PresidentialPardonForm &operator=(PresidentialPardonForm &Form);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor)const; 
    private:
        std::string m_target;
};

#endif
