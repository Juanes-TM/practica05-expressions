/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file integer_division_and_reminder.cc
  * @author Juan Esteban Tamayo Marmolejo alu0101592916@ull.edu.es
  * @date Oct 16 2023
  * @brief Print a line with the three words in reverse order, separated with spaces.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>
#include <string>

int main(){
  std::string cadena1, cadena2, cadena3;
  std::cin >> cadena1 >> cadena2 >> cadena3;
  std::cout << cadena3 << " " << cadena2 <<  " " << cadena1 << std::endl;
  return 0;
}
