#include "AForm.h"

class RobotomyRequest : public AForm
{
    public:

        RobotomyRequest();
        RobotomyRequest(RobotomyRequest &Form);
        RobotomyRequest::RobotomyRequest(bool _signed, std::string target);
        RobotomyRequest &operator=(RobotomyRequest &Form);
        ~RobotomyRequest();
        void execute(Bureaucrat const & executor) const;
    private:
        std::string m_target;
};