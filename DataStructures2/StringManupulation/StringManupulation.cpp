#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
#include <sstream>

/// @brief This function is in charged of reversing each word
/// @param word
/// @return The word inputed, but reversed. For exameple: (input: word, output: drow)
std::string string_reversing(std::string word)
{
    std::string reversed;
    for (int i = word.length() - 1; i >= 0; --i)
    {
        reversed += word[i];
    }
    return reversed;
}
std::string bulkReversing(const std::string &inputNameFile, const std::string &outputNameFile)
{
    char character;
    std::string word;
    std::stringstream content;

    std::ifstream inputFile;
    inputFile.open(inputNameFile);
    std::ofstream outputFile;
    outputFile.open(outputNameFile);

    while (inputFile.get(character))
    {
        if (std::isalpha(character))
        {
            word += character;
        }
        else
        {
            if (!word.empty())
            {
                content << string_reversing(word);
                word.clear();
            }
            content << character;
        }
    }
    inputFile.close();
    outputFile << content.str();
    outputFile.close();

    return content.str();
}

void changedName(const std::string &inputNameFile)
{
    std::string outputNameFile;
    std::ofstream outputFile;
    while (!outputFile.is_open())
    {
        std::cout << "Please write your desired name for the file" << std::endl;
        std::cin >> outputNameFile;
        outputNameFile += ".txt";
        std::ofstream outputFile(outputNameFile);
        outputFile.open(outputNameFile);
        if (!outputFile.is_open())
        {
            std::cout << std::endl
                      << "\nError abriendo el archivo: " << outputNameFile << std::endl;
            std::cout << "Recuerde que tiene que ser un nombre valido para un archivo .txt (no escriba la extension .txt)" << std::endl;
        }
        else
        {
            outputFile.close();
            break;
        }
    }

    bulkReversing(inputNameFile, outputNameFile);

    std::cout << "\nEl archivo En reversa está en: " << outputNameFile << std::endl;
}
void Manipulation(void)
{
    // TODO: make a program in which a certain file inside a directory, each wordk will be changed backwards
    std::string inputNameFile, outputNameFile;
    char confirmation;
    std::ifstream inputFile;

    while (!inputFile.is_open())
    {
        std::cout << "\nPorfavor ingrese el nombre del archivo. \nNo ponga el tipo de extension(.txt)\nEste programa solo puede reescribir archivos '.txt'\n\nNombre: ";
        std::cin >> inputNameFile;
        inputNameFile += ".txt";
        std::ifstream inputFile(inputNameFile);
        inputFile.open(inputNameFile);
        if (!inputFile.is_open())
        {
            std::cout << std::endl
                      << "\nError opening input file: " << inputNameFile << std::endl;
            std::cout << "Remember it needs to be a valid .txt (don't write .txt)" << std::endl;
        }
        else
        {
            inputFile.close();
            break;
        }
    }

    std::cout << "Desea que poner un nombre al archivos de salida? [y,N]: ";
    std::cin >> confirmation;

    if (tolower(confirmation) == 'y')
    {
        changedName(inputNameFile);
    }
    else
    {
        outputNameFile = "output.txt";
    }
    std::ofstream outputFile(outputNameFile);

    bulkReversing(inputNameFile, outputNameFile);

    std::cout << "\nEl archivo En reversa está en: " << outputNameFile << std::endl;
}

int main(int argc, char const *argv[])
{
    std::cout << "\n Inicializando programa...\n"
              << std::endl;
    Manipulation();
    return 0;
}
