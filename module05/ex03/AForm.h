#ifndef AForm_H
# define AForm_H

#include <iostream>
#include <exception>

class AForm
{
    public:
   
    AForm();
    AForm(std::string name, bool _signed, int sign, int exec);
    AForm(AForm &cpy);
    ~AForm();
    AForm &operator=(AForm &cpy);
    void setname(std::string name);
    void setsign(int sign);
    void setexec(int sign);
    bool beSigned(class Bureaucrat &obj);
    bool beExecuted(Bureaucrat &obj);
    std::string getname();
    bool getsigned();
    bool getexecuted();
    int getsign();
    int getexec();
    virtual void execute(Bureaucrat const & executor) const = 0;
   
    private:
   
    std::string m_name;
    bool m_signed;
    bool m_executed;
    int grade_sign;
    int grade_exec;

     class GradeTooLowException: public std::exception
    {
        virtual const char* what() const throw()
        {
           return "Too Low\n";
        }
    };

    class GradeTooHighException : public std::exception{
        virtual const char* what() const throw()
        {
            return "Too High\n";
        }
    };
};




#endif
