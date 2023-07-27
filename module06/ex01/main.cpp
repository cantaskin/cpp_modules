#include "Serialization.hpp"
#include <iostream>

int main()
{
    Data intdata = {13,42};
    Data *int_ptr = &intdata;
    Data *ptr_int;

    Serialization C;
    ptr_int = C.deserialize(C.serialize(int_ptr));
    std::cout << ptr_int << " " << int_ptr << "\n";
}