#include <iostream>
#include <ctime>
#include <cstdlib> 
#include "Array.hpp"

// Array sınıfınızı buraya kopyalayın...


int main() {
    try {
        // int türünden bir dizi oluşturma
        srand(time(NULL));
        Array<int> intArray(5); // 5 elemanlı bir dizi oluşturur
        for (int i = 0; i < intArray.size(); i++)
            intArray[i] = rand() * 10; // Dizi elemanlarına değer atama

        std::cout << "intArray: "<< intArray << "\n";

        // double türünden bir dizi oluşturma
        Array<double> doubleArray(3); // 3 elemanlı bir dizi oluşturur
        for (int i = 0; i < doubleArray.size(); i++)
            doubleArray[i] = rand() * (i + 1); // Dizi elemanlarına değer atama

        std::cout << "doubleArray: " << doubleArray<< "\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
