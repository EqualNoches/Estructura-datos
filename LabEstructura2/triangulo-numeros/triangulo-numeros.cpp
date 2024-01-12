#include <iostream>
#include <regex>

bool isNumber(const std::string &input) {
  std::regex pattern("^[0-9]+$");
  return std::regex_match(input, pattern);
}

int main(int argc, char *argv[]) {
  std::string input_number = "0";
  int number;
  int original_number;
  int aux;
  int totalRows = 10;
  int currentHashes = 1;

  std::cout << "Introduzca un numero mayor a 55" << std::endl;
  while (number < 55) {
    do {
      std::cout << "Numero: ";
      std::cin >> input_number;
    } while (!isNumber(input_number));

    number = std::stoi(input_number);
  }
  original_number = number;

    for(int i = 0; i <=totalRows;i++)
    {
        // Imprimir espacios antes de los números
        for (int k = 0; k < totalRows - i; ++k) {
            std::cout << " ";
        }

        // Imprimir números en orden creciente
        for (int j = 0; j < 2 * i - 1; ++j) {
            std::cout << number << " ";
           number--;
      // Reset num to 55 if it goes below 1
      if (number < 1) {
        number = 55;
      }
    }

    // Move to the next line after printing each row
    std::cout << std::endl;
  }
  return 0;
}
