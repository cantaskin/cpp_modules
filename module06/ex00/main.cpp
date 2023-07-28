#include "Converter.h"

int main(int argc, char const *argv[])
{
    if (argc == 2)
    {
        const std::string str(argv[1]);
        try
        {
            Converter S(str);
            S.convert(str);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    else
        std::cout << "./convert [char | int | float | double]" << std::endl;
    return 0;
}
