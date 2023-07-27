#include <iostream>
#include <cctype>

template <typename T>
void iter(T *arr,const size_t &len, void (*func)(const T &sending))
{
    for(size_t index = 0; index < len; index++)
    {
        (*func)(arr[index]);
    }
}

template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}

int main() {

    int intR[5] = { 0, 1, 2, 3, 4 };
	iter(intR, 5, &printElement); std::cout << "\n";

	float floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(floatR, 5, &printElement); std::cout << "\n";

	double doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(doubleR, 5, &printElement); std::cout << std::endl;

	bool boolR[2] = { false, true };
	iter(boolR, 2, &printElement); std::cout <<"\n";

    return 0;
}
