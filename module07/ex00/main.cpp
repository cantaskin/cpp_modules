#include "Functions.h"
#include <iostream>

int main()
{
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << "\n";
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << "\n";
	std::cout << "min(a, b) = " << ::min(a, b) << "\n";
	std::cout << "max(a, b) = " << ::max(a, b) << "\n";

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c = " << c << ", d = " << d << "\n";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << "\n";
	std::cout << "min(c, d) = " << ::min(c, d) << "\n";
	std::cout << "max(c, d) = " << ::max(c, d) << "\n";

	std::string e = "chaine3";
	std::string f = "chaine3";

	std::cout << "e = " << e << ", f = " << f << "\n";
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << "\n";
	std::cout << "f -> " << &f  << "\n";
	std::cout << "min(e, f) = " << ::min(e, f) << " (" << &::min(e, f) << ")" << "\n";
	std::cout << "max(e, f) = " << ::max(e, f) << " (" << &::max(e, f) << ")" << "\n";

	return (0);
}