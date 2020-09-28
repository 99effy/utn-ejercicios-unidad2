/*
Enunciado: Crear la funcion replicate(char car, byte n) que retorna el caracter dado N veces.
*/

#include <iostream>

std::string replicate(char car, short n);

int main() {

    std::cout << "Indique el carácter a repetir: ";

    char character;
    short repeatCount;

    std::cin >> character;

    std::cout << "Indique la cantidad de veces a repetir dicho carácter: ";

    std::cin >> repeatCount;

    std::cout << "La cadena creada es la siguiente: " << replicate(character, repeatCount) << std::endl;

    std::cin;

    return 0;
}

std::string replicate(char car, short n) {
    std::string strToReturn;

    for (short i = 0; i < n; i++) strToReturn += car;

    return strToReturn;
}