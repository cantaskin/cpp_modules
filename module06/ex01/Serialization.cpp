#include "Serialization.hpp"

    Serialization::Serialization()
    {

    }
    Serialization::~Serialization()
    {

    }
    Serialization &Serialization::operator=(const Serialization &Obj)
    {
        
    }
    Serialization::Serialization(const Serialization &Obj)
    {

    }
    uintptr_t Serialization::serialize(Data* ptr)
    {
        return reinterpret_cast<uintptr_t>(ptr);
    }
    Data* Serialization::deserialize(uintptr_t raw)
    {
        return reinterpret_cast<Data *>(raw);
    }