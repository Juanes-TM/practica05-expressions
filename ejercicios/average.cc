/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file integer_division_and_reminder.cc
  * @author Juan Esteban Tamayo Marmolejo alu0101592916@ull.edu.es
  * @date Oct 16 2023
  * @brief Print the average of the numbers with 2 digits after the decimal point.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iomanip>
#include <iostream>

int main() {
  double numero{0}, sumatoria{0};
  int cantidad{0};
  while (std::cin >> numero) {
    sumatoria += numero;
    cantidad++;
  }
  std::cout << std::fixed << std::setprecision(2) << sumatoria / cantidad << std::endl;
}
