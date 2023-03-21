#include "Cat.h"

Cat::Cat()
{
    std::cout << "Cats constructors" << '\n';
    m_type = "Cat";
}

Cat::Cat(std::string &type) : Animal(type)
{
    std::cout << "Cat's animal type constructor" << '\n';
}

Cat::~Cat()
{
    std::cout << "Cat's destructors" << '\n';
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Copy constructor" << '\n';
}

Cat &Cat::operator=(Cat& other)
{
    if(this == &other)
        return  (*this);
    m_type = other.m_type;
    return (*this);
}
void Cat::make_sound() const
{
    std::cout << " Meow " << '\n';
}