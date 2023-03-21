#ifndef WRONGDOG_H
# define WRONGDOG_H

#include "WAnimal.h"

class WrongDog : public WAnimal
{
    public:
        WrongDog();
        WrongDog(std::string &);
        ~WrongDog();
        WrongDog(const WrongDog &);
        WrongDog &operator=(WrongDog &);
        void make_sound() const;
};

#endif