#ifndef ROBOTOMYREQUEST_H
# define ROBOTOMYREQUEST_H
#include "AForm.h"

class RobotomyRequest : public AForm
{
    public:

        RobotomyRequest();
        RobotomyRequest(RobotomyRequest &Form);
        RobotomyRequest(bool _signed, std::string target);
        RobotomyRequest &operator=(RobotomyRequest &Form);
        ~RobotomyRequest();
        void execute(Bureaucrat const & executor) const;
    private:
        std::string m_target;
};

#endif