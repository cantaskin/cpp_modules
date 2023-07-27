#include "easyfind.hpp"
#include <vector>

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    std::vector<int> vec(arr, arr + n);
    try
    {
        easyFind(vec, 4);
        easyFind(vec, 9);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}