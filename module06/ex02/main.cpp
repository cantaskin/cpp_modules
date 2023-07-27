#include <cstdlib>
#include <ctime>
#include <iostream>
class Base
{
    public:
    virtual ~Base()
    {

    }
};

class A : public Base
{
    
};

class B : public Base
{

};

class C : public Base
{

};

Base * generate(void)
{
    std::srand((unsigned)time(NULL));
    int number = rand() % 3;
    std::cout << number;
    switch (number){
        case 0:
            return new A();
        case 1:
            return new B();
        default:
            return new C();
    }

}

void identify(Base* p)
{
    if(dynamic_cast<A *>(p) != NULL)
        std::cout << "p's type is A\n";
    else if(dynamic_cast<B*>(p) != NULL)
        std::cout << "p's type is B\n";
    else if(dynamic_cast<C*>(p) != NULL)
        std::cout << "p's type is C\n";
    else
        std::cout << "Doesn't work\n";
}

void identify(Base& p)
{
    try
    {
        if(dynamic_cast<A *>(&p) != NULL)
            std::cout << "p's type is A\n";
        else if(dynamic_cast<B*>(&p) != NULL)
            std::cout << "p's type is B\n";
        else if(dynamic_cast<C*>(&p) != NULL)
        std::cout << "p's type is C\n";
    else
        std::cout << "Doesn't work\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    Base *_random1 =  generate();
    Base *_random3 = generate();
    Base &_random2 = *_random1;
    identify(_random3);
    identify(_random1);
    identify(_random2);
}