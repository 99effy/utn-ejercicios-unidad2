/*
Enunciado: Crear la funcion LowCase(char car), que convierte caracter dado a minuscula, 
si esta en mayuscula, caso contrario retorna el mismo caracter.
*/

#include <iostream>

char lowCase(char car);

int main() {
    char    charToConvert,
            charResult;

    std::cout << "Ingrese el caracter a convertir: " << std::endl;
    std::cin >> charToConvert;

    charResult = lowCase(charToConvert);

    if (charResult != '0') {
        std::cout << "El resultado es: \n" << charResult << std::endl; 
    } else {
        std::cout << "El caracter ingresado no puede ser convertido de mayuscula a minuscula!" << std::endl;
    }

    return 0;
}

char lowCase(char car) {
    short charToReturn;

    if ( (short)car < 91 && (short)car > 64 ) {
        charToReturn = (short)car + 32;
        return (char)charToReturn;
    } else if ( (short)car < 123 && (short)car > 96) {
        return car;
    } else {
        return '0';
    }
}