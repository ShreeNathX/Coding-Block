/*
* * *   * * * 
* *       * *
*           *

*           *
* *       * *
* * *   * * *
*/

#include <iostream>
using namespace std;

int main() {
    int n = 3;

    // Upper part
    for (int i = 0; i < n; i++) {

        // Left stars
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }

        // Spaces
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "  ";
        }

        // Right stars
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    cout << endl;

    // Lower part
    for (int i = 0; i < n; i++) {

        // Left stars
        for (int j = 0; j < i + 1; j++) {
            cout << "* ";
        }

        // Spaces
        for (int j = 0; j < 2 * (n - i - 1) + 1; j++) {
            cout << "  ";
        }

        // Right stars
        for (int j = 0; j < i + 1; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}