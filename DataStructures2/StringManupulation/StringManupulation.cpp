#include <iostream>
#include <fstream>
#include <string>

std::string string_reversing(std::string word);
void ValidarCadena(std::string s);

int main(int argc, char const *argv[])
{
    // TODO: make a program in which a certain file inside a directory, each wordk will be changed backwards
    std::string inputNameFile, outputNameFile;

    std::cout << "Porfavor ingrese el nombre del archivo. \nNo ponga el tipo de extension(.txt)\n(Este programa solo con archivos txt) \n Nombre: ";
    ValidarCadena(inputNameFile);
    inputNameFile.append(".txt");

    std::cout << inputNameFile << std::endl;
    std::ifstream inputFile("input.txt");
    // std::ofstream outputFile("output.txt");

    return 0;
}

std::string string_reversing(std::string word)
{
    std::string reversed;
    for (int i = word.length() - 1; i >= 0; --i)
    {
        reversed += word[i];
    }
    return reversed;
}

void ValidarCadena(std::string s)
{
    while (!(std::cin >> s))
    {
        std::cout << "Porfavor introduzca un valor valido";
        std::cin.clear();
        std::cin.ignore(123, '\n');
    }
}