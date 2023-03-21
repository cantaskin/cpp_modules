#ifndef WANIMAL_H
# define WANIMAL_H

#include <iostream>

class WAnimal
{
    public:
        WAnimal();
        WAnimal(std::string);
        ~WAnimal();
        WAnimal(const WAnimal &);
        WAnimal &operator=(const WAnimal &);
        virtual void make_sound() const;
        std::string get_type() const;
    protected:
        std::string m_type;
};

#endif