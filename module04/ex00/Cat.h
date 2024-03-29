#ifndef CAT_H
# define CAT_H

#include "Animal.h"

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string &);
        ~Cat();
        Cat(const Cat &);
        Cat &operator=(Cat &);
        void make_sound() const;
};

#endif