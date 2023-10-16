/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file integer_division_and_reminder.cc
  * @author Juan Esteban Tamayo Marmolejo alu0101592916@ull.edu.es
  * @date Oct 13 2023
  * @brief Recibe una letra en mayuscula y la devuelve en miniscula.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>

int main(){
  char letra_mayuscula;
  std::cin >> letra_mayuscula;
  if (static_cast<int>(letra_mayuscula) >= 97 && static_cast<int>(letra_mayuscula) <= 122){
    std::cout<<"letra no es mayuscula" << std::endl;
    return 0;
  }
  else {
    int cambio = static_cast<int>(letra_mayuscula);
    cambio = cambio + 32;
    std::cout << static_cast<char>(cambio) << std::endl;
  }

  return 0;
}
