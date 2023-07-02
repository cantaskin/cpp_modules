    
    #include "RobotomyRequest.h"
    #include "Bureaucrat.h"

    RobotomyRequest::RobotomyRequest() : AForm("RobotomyRequest",false,72,45) , m_target("Can"){}

    RobotomyRequest::RobotomyRequest(bool _signed, std::string target) : AForm("RobotomyRequest", _signed, 72, 45) , m_target(target){}

    RobotomyRequest::RobotomyRequest(RobotomyRequest &Form) : AForm(Form) , m_target(Form.m_target) {}
    
    RobotomyRequest &RobotomyRequest::operator=(RobotomyRequest &Form) 
    {
        setname(Form.getname());
        setsign(Form.getsign());
        setexec(Form.getexec());
    }
    
    RobotomyRequest::~RobotomyRequest() {}

    void RobotomyRequest::execute(Bureaucrat const &executor) const
    {
        int a = rand();

        if(a % 2)
        {
            std::cout << "Success!\n";
        }
        else
            std::cout << "Fail!\n";
    }