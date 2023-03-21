#ifndef DOG_H
# define DOG_H

#include "Animal.h"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string &);
        ~Dog();
        Dog(const Dog &);
        Dog &operator=(Dog &);
        void make_sound() const;
};

#endif