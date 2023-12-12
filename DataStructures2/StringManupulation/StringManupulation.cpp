#include <iostream>
#include <fstream>
#include <string>

std::string string_reversing(std::string word);
int main(int argc, char const *argv[])
{
    // TODO: make a program in which a certain file inside a directory, each wordk will be changed backwards
    std::string test;
    std::cin >> test;

    std::string word = string_reversing(test);
    std::cout << word << std::endl;

    return 0;
}

std::string string_reversing(std::string word)
{
    int size_word = sizeof(word);
    std::string reversed_word = " ";
    for (int i = size_word; i < 0; i++)
    {
        while (word[i] != ' ')
        {

            reversed_word += word[i];
        }
    }

    return reversed_word;
}
