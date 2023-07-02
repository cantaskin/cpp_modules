#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <exception>

class Form
{
    public:
   
    Form();
    Form(std::string name, bool _signed, int sign, int exec);
    Form(Form &cpy);
    ~Form();
    Form &operator=(Form &cpy);
    void setname(std::string name);
    void setsign(int sign);
    void beSigned(class Bureacrat &obj);
    void setexec(int sign);
    std::string getname();
    bool getsigned();
    int getsign();
    int getexec();
   
    private:
   
    std::string m_name;
    bool m_signed;
    int grade_sign;
    int grade_exec;

     class GradeTooLowException: public std::exception
    {
        virtual const char* what() const throw()
        {
            std::cout << "Too Low\n";
        }
    };

    class GradeTooHighException : public std::exception{
        virtual const char* what() const throw()
        {
            std::cout << "Too High\n";
        }
    };
};





#endif