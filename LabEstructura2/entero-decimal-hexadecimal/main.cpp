#include <cmath>
#include <iostream>
#include <string>

using namespace std;

string convertDecimalBinary(int number)
{

    int quotient, binaryNum = 0;
    string binaryOut;
    quotient = number;
    while (quotient != 0)
    {
        int remainder;
        string temp = " ";
        remainder = quotient % 2;
        quotient /= 2;

        temp = to_string(remainder);
        binaryOut = temp + binaryOut;
    }

    return binaryOut;
}

string convertBinaryHex(int decimal)
{
    int  hexNumber = 0;
    string hexLetter;
    while (decimal != 0)
    {
        int temp;
        temp = (decimal % 16);
        if (temp < 10) {
            temp += 48;
        }
        else if (temp <15) {
            temp += 55;
        } 
        hexNumber = hexNumber * 100 + temp;
        decimal /= 16;
    }
    hexLetter = hexNumber;
    
    
    return hexLetter;
}

int main(int argc, char *argv[])
{

    int decimal;
    string binaryStr, hexadecimal;

    cout << "Please type a decimal number: ";
    cin >> decimal;

    binaryStr = convertDecimalBinary(decimal);
    hexadecimal = convertBinaryHex(decimal);
    cout << "The number " << decimal << " is converted to binary like this: :" << binaryStr << endl;
    cout << "The number : " << decimal << " is converted to Hex code like this: " << hexadecimal << endl;
    return 0;
}
