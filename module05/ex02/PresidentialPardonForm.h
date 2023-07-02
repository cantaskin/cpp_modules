#include "AForm.h"

class PresidentialPardonForm : public AForm
{
    public:

        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &Form);
        PresidentialPardonForm::PresidentialPardonForm(bool _signed, std::string target);
        PresidentialPardonForm &operator=(PresidentialPardonForm &Form);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
    private:
        std::string m_target;
};