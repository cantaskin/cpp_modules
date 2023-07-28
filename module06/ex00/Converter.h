#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>

    enum _type
    {
        charType,
        intType,
        doubleType,
        floatType
    };
class Converter
{
    public:
        Converter();
        Converter(const std::string &literal);
        ~Converter();
        Converter(Converter &Obj);
        Converter &operator=(Converter &Obj);
        int toInt(std::string str);
        double toDouble(std::string str);
        char toChar(std::string str);
        void convert(const std::string literal);
        enum _type Type;
    class NonDisplayableCharException : public std::exception
    {
         virtual const char *what() const throw();
    };
    class ImposibleConversionException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class InvalidConversionInputException : public std::exception
    {
        virtual const char *what() const throw();
    };
};
