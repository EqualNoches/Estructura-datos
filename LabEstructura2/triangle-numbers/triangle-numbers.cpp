#include <iostream>
#include <regex>


bool isNumber(const std::string& input){
    std::regex pattern("^[0-9]+$");
    return std::regex_match(input, pattern);
}


int main(int argc, char* argv[]){
    std::string input_number;
    int number = 0;
    std::cout << "Introduzca un numero que sea mayor a 55";
    while (number < 55 ){
        do
        {
        std::cout << "Numero: ";
        std::cin >> input_number;
        }while(!isNumber(input_number));
        number = std::stoi(input_number);
    }

    


    return 0;
}