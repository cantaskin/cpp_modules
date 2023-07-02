#include "AForm.h"

class ShrubberyCreationForm : public AForm
{
    public:

        ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm &Form);
        ShrubberyCreationForm::ShrubberyCreationForm(bool _signed, std::string target);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &Form);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
    private:
        std::string m_target;
};