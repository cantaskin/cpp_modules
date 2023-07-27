#include "Converter.h"
Converter::Converter()
{

}
Converter::Converter(const std::string &literal)
{
    if (literal.empty())
        throw InvalidConversionInputException();
    if (literal.size() == 1 && !isdigit(literal[0]))
        Type = _type::charType;
    else if (literal != "nan" && literal.find('f') == std::string::npos && literal.find('.') == std::string::npos)
        Type = _type::intType;
    else
    {
        if (literal[literal.length() - 1] == 'f' && literal != "+inf" && literal != "-inf" && literal != "inf")
            Type = _type::floatType;
        else
            Type = _type::doubleType;
    }
}

Converter::~Converter() {}
Converter::Converter(Converter &Obj)
{
    Type = Obj.Type;
}
Converter &Converter::operator=(Converter &Obj)
{
    Type = Obj.Type;
    return *this;
}
int Converter::toInt(std::string str)
{
    if (str[0] == '+' || str[0] == '-')
        str.erase(0);
    if (str[0] == '0')
        return 0;
    long i = strtol(str.c_str(), NULL, 10);
    if (i == 0L || i > INT_MAX || i < INT_MIN)
        throw ImposibleConversionException();
    return static_cast<int>(i);
 
}
double Converter::toDouble(std::string str)
{
    if (str[0] == '+' || str[0] == '-')
        str.erase(0);
    if (str == "0.0f" || str == "0.0" || str == "0")
        return 0.0;
    double d = strtod(str.c_str(), NULL);
    if (d == 0.0)
        throw ImposibleConversionException();
    return d;
}
char Converter::toChar(std::string str)
{
    if (str[0] == '+' || str[0] == '-')
        str.erase(0);
    if (str[0] == '0')
        throw NonDisplayableCharException();
    long c = strtol(str.c_str(), NULL, 10);
    if (c == 0L || c < CHAR_MIN || c > CHAR_MAX)
        throw ImposibleConversionException();
    else if (!isprint(c))
        throw NonDisplayableCharException();
    return static_cast<char>(c);
}

const char *Converter::NonDisplayableCharException::what() const throw()
{
    return "Non displayable character";
}
const char *Converter::ImposibleConversionException::what() const throw()
{
    return "Imposible to convert";
}
const char *Converter::InvalidConversionInputException::what() const throw()
{
    return "Invalid conversion input";
}

void Converter::convert(const std::string literal)
{
    if (Type == _type::charType)
    {
        std::cout << "char  : " << literal << std::endl;
        std::cout << "int   : " << static_cast<int>(literal[0]) << std::endl;
        std::cout << "float : " << std::showpoint << static_cast<float>(literal[0]) << "f" << std::endl;
        std::cout << "double: " << std::showpoint << static_cast<double>(literal[0]) << std::endl;
    }
    else if (Type == _type::intType)
    {
        std::cout << "char  : ";
        try
        {
            std::cout << toChar(literal) << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "int   : " << literal << std::endl;
        std::cout << "float : ";
        try
        {
            std::cout << std::showpoint << static_cast<float>(toDouble(literal)) << "f" << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "double: ";
        try
        {
            std::cout << std::showpoint << toDouble(literal) << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    else if (Type == _type::floatType)
    {
        std::cout << "char  : ";
        try
        {
            std::cout << toChar(literal) << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "int   : ";
        try
        {
            std::cout << toInt(literal) << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "float : " << std::showpoint << static_cast<float>(toDouble(literal)) << "f" << std::endl;
        std::cout << "double: ";
        try
        {
            std::cout << std::showpoint << toDouble(literal) << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    else if (Type == _type::doubleType)
    {
        std::cout << "char  : ";
        try
        {
            std::cout << toChar(literal) << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "int   : ";
        try
        {
            std::cout << toInt(literal) << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "float : ";
        try
        {
            std::cout << std::showpoint << static_cast<float>(toDouble(literal)) << "f" << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "double: " << std::showpoint << toDouble(literal) << std::endl;
    }
}