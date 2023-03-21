#include "Dog.h"

Dog::Dog()
{
    std::cout << "Dog's constructors" << '\n';
    m_type = "Dog";
}

Dog::Dog(std::string &type) : Animal(type)
{
    std::cout << "Dog's animal type constructor" << '\n';
}

Dog::~Dog()
{
    std::cout << "Dog's destructors" << '\n';
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Copy constructor" << '\n';
}

Dog &Dog::operator=(Dog& other)
{
    if(this == &other)
        return  (*this);
    m_type = other.m_type;
    return (*this);
}
void Dog::make_sound() const
{
    std::cout << " Haw Haw " << '\n';
}