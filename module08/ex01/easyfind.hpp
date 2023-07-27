#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void	easyFind(T container, int N)
{
	if (std::find(container.begin(), container.end(), N) != container.end())
		std::cout << "The Number " << N << " Existed" << std::endl;
	else
		throw std::runtime_error("Can't find element in container!");
}

#endif