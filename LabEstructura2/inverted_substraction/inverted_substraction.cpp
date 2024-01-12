#include <iostream>
#include <regex>

bool isNumber(const std::string &input) {
  std::regex pattern("^[0-9]+$");
  return std::regex_match(input, pattern);
}

int main(int argc, char const *argv[]) {
  //* Este codigo esta hecho para que reste los numeros de 3 digitos
  std::string str_number= "";
  int number = 0, inverted_number = 0, original_number;
  int final_number;
  int length_number;
  while (str_number.length() != 3) {
    do {
      std::cout << "Numero: ";
      std::cin >> str_number;
    } while (!isNumber(str_number));
  }
  number = std::stoi(str_number);
  original_number = number;
  while (number > 0) {
    inverted_number = inverted_number * 10 + number % 10;
    number /= 10;
  }
    final_number = original_number - inverted_number;
    std::cout << "The final equation is " << final_number << " = " <<original_number << " - " <<inverted_number<<std::endl;
  return 0;
}
