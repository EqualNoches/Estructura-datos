#include <iostream>
#include <regex>


bool isNumber(const std::string& input){
    std::regex pattern("^[0-9]+$");
    return std::regex_match(input, pattern);
}


int main(int argc, char* argv[]){
    std::string input_number= "0";
    int number;
    int aux;
    std::cout << "Introduzca un numero mayor a 55"<< std::endl;
    do{
        std::cout << "Numero: ";
        std::cin >> input_number;
    }while(!isNumber(input_number));
    number = std::stoi(input_number);
    for (int i = 0; i < 55; i++)
    {

    }
    return 0;
}


