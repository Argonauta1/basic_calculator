#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char dzialanie;
    int x;
    int y;
    int wynik;

    std::cout << "W Git";
    std::cout << "Jakie dzialanie chcesz wykonac: ";
    std::cin >> dzialanie;
    std::cout << "Pierwsza liczba: ";
    std::cin >> x;
    std::cout << "Druga liczba: ";
    std::cin >> y;
    switch (dzialanie) {
    case '+':
        wynik = x + y;
        std::cout << wynik;
        break;
    case '-':
        wynik = x - y;
        std::cout << wynik;
        break;
    case '*':
        wynik = x * y;
        std::cout << wynik;
        break;
    case '/':
        if (y == 0) {
            std::cout << "Nie mozna dzielic przez zero.";
        }
        else {
            wynik = x / y;
            std::cout << wynik;
        }
        break;
    default:
        cout << "Nie ma takiego operatora";

    }
    return 0;
}