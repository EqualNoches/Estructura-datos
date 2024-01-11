#include <iostream>
#include <regex>

struct Node{
    int data;
    Node *next;
};

void Push(Node *&stack, int n)
{
    Node *new_node = new Node();
    new_node->data = n;
    new_node->next = stack;
    stack = new_node;
    std::cout << "\nElemento " << n << " agregado a la pila correctamente\n" << std::endl;
}

bool isNumber(const std::string& input){
    std::regex pattern("^[0-9]+$");
    return std::regex_match(input, pattern);
}


int main(int argc, char* argv[]){
    int input_numbers;
    std::cout << "Introduzca los 51 numeros que se van a introducir";
    for (int i = 0; i < 52; i++)
    {
        do
        {
        std::cout << "Numero "<< i;
        std::cin >> input_numbers;
        }while(isNumber(input_numbers));
    }
    return 0;
}


