#include "WAnimal.h"

WAnimal::WAnimal() : m_type()
{
    std::cout << "WAnimal has created with default constructor." << '\n';
}

WAnimal::~WAnimal()
{
    std::cout << "WAnimal has destroyed" << '\n';
}

WAnimal::WAnimal(std::string type) : m_type(type)
{
    std::cout << "WAnimal has creadted with constructor." << '\n';
}

WAnimal::WAnimal(const WAnimal &other) : m_type{other.m_type}
{
    std::cout << "WAnimal has copied with constructor." << '\n';
}

WAnimal &WAnimal::operator=(const WAnimal &other) 
{
    std::cout << "WAnimal has copied with asignmemt." << '\n';
    if(this == &other)
        return (*this);
    m_type = other.m_type;
    return(*this);
}

std::string WAnimal::get_type() const
{
    std::cout << "Get WAnimal type." << '\n';
    return (m_type);
}

void WAnimal::make_sound() const
{
    std::cout << "WAnimal doesn't make sound" << '\n';
}