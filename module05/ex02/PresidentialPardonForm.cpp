    
    #include "PresidentialPardonForm.h"
    #include "Bureaucrat.h"

    PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",false,25,5) , m_target("Can"){}

    PresidentialPardonForm::PresidentialPardonForm(bool _signed, std::string target) : AForm("PresidentialPardonForm", _signed, 25, 5) , m_target(target){}

    PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &Form) : AForm(Form) , m_target(Form.m_target) {}
    
    PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &Form) 
    {
        setname(Form.getname());
        setsign(Form.getsign());
        setexec(Form.getexec());
    }
    
    PresidentialPardonForm::~PresidentialPardonForm() {}

    void PresidentialPardonForm::execute(Bureaucrat const &executor) const
    {
        std::cout << m_target << " has been pardoned by Zafod Beeblebrox\n";
    }