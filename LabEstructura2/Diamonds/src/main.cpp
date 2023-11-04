#include <iostream>

using namespace std;

int main() {
  int floors = 5;
  int cantsps = floors - 1;

  // which floor
  for (int i = 0; i <= floors; i++) {

    // first spaces
    for (int j = 0; j <= cantsps; j++) {
      cout << ("  ");
    }
    // first pyramid asterisk
    for (int k = 1; k <= 2 * i + 1; k++) {
      cout << ("* ");
    }
    // spaces between
    for (int j = 1; j <= 2 * (floors - i) + 1; j++) {
      cout << ("  ");
    }

    // second pyramid
    for (int k = 1; k <= 2 * i + 1; k++) {
      cout << ("* ");
    }

    cout << endl;
    cantsps--;
  }

  // for the inverse of the triangle
  for (int i = floors - 1; i >= 0; i--) {

    //spaces 
    for (int k = 0; k < floors - i; k++) {
      cout << ("  ");
    }

    //asterisks
    for (int j = 1; j <= 2 * i + 1; j++) {
      cout << ("* ");
    }

        // spaces between
    for (int j = 1; j <= 2 * (floors - i) + 1; j++) {
      cout << ("  ");
    }

        //asterisks
    for (int j = 1; j <= 2 * i + 1; j++) {
      cout << ("* ");
    }


    cout << endl;
  }

  return 0;
}
