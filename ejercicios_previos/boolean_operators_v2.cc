/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file integer_division_and_reminder.cc
  * @author Juan Esteban Tamayo Marmolejo alu0101592916@ull.edu.es
  * @date Oct 16 2023
  * @brief Imprime la tabla de verdad, con diferentes operaciones binarias, entre dos variables booleanas.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>

bool operators(bool a, bool b, char bin_operator){
	
  switch (bin_operator){
		
    case '&':
      return a && b;

    case '|':
      return a || b;

    case '^':
      return a ^ b;

  }

  return 0;

}
	
bool OperatorNot(bool a){return !a; }

int main(){
        bool var_A, var_B;
        bool A_input[4] = {0,0,1,1}, B_input[4] = {0,1,0,1};
        std::cout << "A " << " B " << " -A " << " -B " " A and B " << " A or B " << " A xor B " << std::endl;
        for(int i=0; i<4; i++){
                var_A = A_input[i];
          var_B = B_input[i];
                std::cout << var_A << "  " << var_B << "   " << OperatorNot(var_A) << "   " << OperatorNot(var_B) << "     " << operators(var_A, var_B, '&')       << "       " << operators(var_A, var_B, '|') << "        " << operators(var_A, var_B, '^') << std::endl;
        }

        return 0;
}

