/*
Enunciado: Crear la funcion FillBlank(string cad, byte n) que rellena la cadena Cad de longitud fisica N
con espacios en blanco a su derecha.
*/

#include <iostream>
#include <string.h>

std::string fillBlank(std::string cad, short n);

int main() {
    char placeholderArray[256];    
    std::string strToProcess;
    short size;

    std::cout << "Ingrese la cadena a procesar: " << std::endl;
    std::cin.getline(placeholderArray, sizeof(placeholderArray) );
    strToProcess = placeholderArray;
    std::cout << "Ingrese tamaño para la cadena: " << std::endl;
    std::cin >> size;
    std::cout << "La cadena procesada es la siguiente: \'" << fillBlank(strToProcess, size) << "\'" << std::endl;

    return 0;
}

std::string fillBlank(std::string cad, short n) {
    short sizeForString = n;
    sizeForString -= cad.length();
    std::string strToReturn = cad;
    for (short i = 0; i < sizeForString; i++) {
        strToReturn += ' ';
    }
    
    return strToReturn;
}