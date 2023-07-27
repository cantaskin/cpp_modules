#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP
#include <cstdint>

struct Data
{
    int x;
    int y;
};

class Serialization
{
    public:
    Serialization();
    ~Serialization();
    Serialization &operator=(const Serialization &Obj);
    Serialization(const Serialization &Obj);
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};

#endif
