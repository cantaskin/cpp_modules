#include "Animal.h"

Animal::Animal() : m_type()
{
    std::cout << "Animal has created with default constructor." << '\n';
}

Animal::~Animal()
{
    std::cout << "Animal has destroyed" << '\n';
}

Animal::Animal(std::string type) : m_type(type)
{
    std::cout << "Animal has creadted with constructor." << '\n';
}

Animal::Animal(const Animal &other) : m_type{other.m_type}
{
    std::cout << "Animal has copied with constructor." << '\n';
}

Animal &Animal::operator=(const Animal &other) 
{
    std::cout << "Animal has copied with asignmemt." << '\n';
    if(this == &other)
        return (*this);
    m_type = other.m_type;
    return(*this);
}

std::string Animal::get_type() const
{
    std::cout << "Get animal type." << '\n';
    return (m_type);
}

void Animal::make_sound() const
{
    std::cout << "Animal doesn't make sound" << '\n';
}