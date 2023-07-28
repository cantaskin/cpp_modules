    
    #include "ShrubberyCreationForm.h"
    #include "Bureaucrat.h"
    #include <fstream>

    ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",false,145,137) , m_target("Can"){}

    ShrubberyCreationForm::ShrubberyCreationForm(bool _signed, std::string target) : AForm("ShrubberyCreationForm", _signed, 145, 137) , m_target(target){}

    ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &Form) : AForm(Form) , m_target(Form.m_target) {}
    
    ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &Form) 
    {
        if(this == &Form)
            return *this;
        setname(Form.getname());
        setsign(Form.getsign());
        setexec(Form.getexec());
        return *this;
    }
    
    ShrubberyCreationForm::~ShrubberyCreationForm() {}

    void ShrubberyCreationForm::execute(Bureaucrat const &executor) const 
    {
        (void)executor;   
        std::ofstream file((m_target + "Shrubbery").c_str());

        if(file.is_open())
        {
            file << "              '.,         " << std::endl;
        file << "        'b      *         " << std::endl;
        file << "         '$    #.         " << std::endl;
        file << "          $:   #:         " << std::endl;
        file << "          *#  @):         " << std::endl;
        file << "          :@,@):   ,.**:' " << std::endl;
        file << ",         :@@*: ..**'     " << std::endl;
        file << " '#o.    .:(@'.@*\"'       " << std::endl;
        file << "    'bq,..:,@@*'   ,*     " << std::endl;
        file << "    ,p$q8,:@)'  .p*'      " << std::endl;
        file << "   '    '@@Pp@@*'         " << std::endl;
        file << "         Y7'.'            " << std::endl;
        file << "        :@):.             " << std::endl;
        file << "       .:@:'.             " << std::endl;
        file << "     .::(@:.              " << std::endl;
        }
        else
            std::cout << "File isn't opened!\n";
        file.close();
    }
