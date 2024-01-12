#include <iostream>
#include <cctype>
#include <cstring>

bool isLowerCase(char c) {
    return (c >= 'a' && c <= 'z');
}

bool isUpperCase(char c) {
    return (c >= 'A' && c <= 'Z');
}

bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

bool isAlphanumeric(char c) {
    return isLowerCase(c) || isUpperCase(c) || isDigit(c);
}

bool isValidPassword(const char* password) {
    int length = strlen(password);

    // Check length
    if (length < 6 || length > 20) {
        std::cout << "REJECTED: Password length must be between 6 and 20 characters." << std::endl;
        return false;
    }

    // Check for at least one lowercase, one uppercase, and one digit
    bool hasLower = false, hasUpper = false, hasDigit = false;

    for (int i = 0; i < length; ++i) {
        if (isLowerCase(password[i])) {
            hasLower = true;
        } else if (isUpperCase(password[i])) {
            hasUpper = true;
        } else if (isDigit(password[i])) {
            hasDigit = true;
        }
    }

    if (!hasLower || !hasUpper || !hasDigit) {
        std::cout << "REJECTED: Password must consist of a mixture of lowercase, uppercase letters, and numerical digits." << std::endl;
        return false;
    }

    // Check for repeated sequences
    for (int i = 0; i < length - 1; ++i) {
        if (password[i] == password[i + 1]) {
            std::cout << "REJECTED: Password must not contain any sequence of characters immediately followed by the same sequence." << std::endl;
            return false;
        }
    }

    // Password meets all criteria
    return true;
}

int main() {
    char password[50];

    std::cout << "Enter your password: ";
    std::cin.getline(password, sizeof(password));

    if (isValidPassword(password)) {
        std::cout << "ACCEPTED: Password is secure." << std::endl;
    }

    return 0;
}