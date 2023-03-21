#include "WrongDog.h"

WrongDog::WrongDog()
{
    std::cout << "WrongDog's constructors" << '\n';
    m_type = "WrongDog";
}

WrongDog::WrongDog(std::string &type) : WAnimal(type)
{
    std::cout << "WrongDog's WAnimal type constructor" << '\n';
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog's destructors" << '\n';
}

WrongDog::WrongDog(const WrongDog &other) : WAnimal(other)
{
    std::cout << "Copy constructor" << '\n';
}

WrongDog &WrongDog::operator=(WrongDog& other)
{
    if(this == &other)
        return  (*this);
    m_type = other.m_type;
    return (*this);
}
void WrongDog::make_sound() const
{
    std::cout << "Ali Koç Başkan Fenerbahçe Şampiyon" << '\n';
}