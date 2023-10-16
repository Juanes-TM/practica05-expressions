/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file integer_division_and_reminder.cc
  * @author Juan Esteban Tamayo Marmolejo alu0101592916@ull.edu.es
  * @date Oct 13 2023
  * @brief Recibe dos numeros y realiza todas las operaciones posibles.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>

int main(){
  int number1, number2;
  std::cin >> number1 >> number2;
  std::cout << number1 << " + " << number1 << " = "<< number1+number2 <<std::endl;
  std::cout << number1 << " - " << number1 << " = "<< number1-number2 <<std::endl;
  std::cout << number1 << " * " << number1 << " = "<< number1*number2 <<std::endl;
  std::cout << number1 << " / " << number1 << " = "<< number1/number2 <<std::endl;
  std::cout << number1 << " % " << number1 << " = "<< number1%number2 <<std::endl;
  std::cout << number1 << " > " << number1 << " = "<< (number1 > number2) <<std::endl;
  std::cout << number1 << " < " << number1 << " = "<< (number1 < number2) <<std::endl;
  std::cout << number1 << " <= " << number1 << " = "<< (number1 <= number2) <<std::endl;
  std::cout << number1 << " >= " << number1 << " = "<< (number1 >= number2) <<std::endl;
  std::cout << number1 << " and " << number1 << " = "<< (number1 and number2) <<std::endl;
  std::cout << number1 << " or " << number1 << " = "<< (number1 or number2) <<std::endl;
  std::cout << number1 << " xor " << number1 << " = "<< (number1 xor number2) <<std::endl;
  return 0;
}
