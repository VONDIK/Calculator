#include "Header.h"


int main()
{


    while (znak != 'z')
    {
        std::cout << "Vvedite dva chisla i znak operacii (+,-,*,/, z dlya vihoda) \n";
        std::cout << "Vvedite pervoe chislo \n";
        std::cin >> a;
        std::cout << "Vvedite vtorot chislo \n";
        std::cin >> b;
        std::cout << "Vvedite znak \n";
        std::cin >> znak;

        switch (znak)
        {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '/':
            c = a / b;
            break;
        case '*':
            c = a * b;
            break;
        default:
            std::cout << "Neverniy znak. Vvedite varianti iz spiska: +;-;/;*. \n";
            break;
        }
        std::cout << "Resultat: \n" << c << endl;
    }

    return 0;
}