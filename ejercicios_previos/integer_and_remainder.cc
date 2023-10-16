/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo.
 * @date 16 oct 2023
 * @brief Inputs 2 integer  numbers and prints their division and the remainder.
 *        The program takes directly the input and prints the output
 */

#include <iostream>

int main() {
        int a{0};
        int b{0};
        std::cin >> a >> b;
	std::cout << a / b <<  " " << a % b << std::endl;
        return 0;
}

