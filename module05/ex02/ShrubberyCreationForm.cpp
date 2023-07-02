    
    #include "ShrubberyCreationForm.h"
    #include "Bureaucrat.h"
    #include <fstream>

    ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",false,145,137) , m_target("Can"){}

    ShrubberyCreationForm::ShrubberyCreationForm(bool _signed, std::string target) : AForm("ShrubberyCreationForm", _signed, 145, 137) , m_target(target){}

    ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &Form) : AForm(Form) , m_target(Form.m_target) {}
    
    ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &Form) 
    {
        setname(Form.getname());
        setsign(Form.getsign());
        setexec(Form.getexec());
    }
    
    ShrubberyCreationForm::~ShrubberyCreationForm() {}

    void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
    {
        
        std::ofstream file;

        file.open(m_target + "Shrubbery");
        std::string txt = "       
 
             /\
            & \
           &++++\
          &  &  \
          &      \
         &        \
        &  &  &  \
        &          \
       & *&*&*&*&*&*&\
      &  &  &  &    \
      &              \
     &++++++++++++++++\
    &  &  &  &  &  & & \
    &                  \
   &                    \
  &  &  &  &  &  &    &   \
  & *&*&*&*&*&*&*&*&*&*&*& \
 &                        \
&                           \
           &   &
          &     &
          &------&         ";

        if(file.is_open())
        {
            file << txt;
            std::cout << "File is opened!\n";
        }
        else
            std::cout << "File isn't opened!\n";
        file.close();
    }