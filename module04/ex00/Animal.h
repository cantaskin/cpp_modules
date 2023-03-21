#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(std::string);
        ~Animal();
        Animal(const Animal &);
        Animal &operator=(const Animal &);
        virtual void make_sound() const;
        std::string get_type() const;

    protected:
        std::string m_type;
};

#endif