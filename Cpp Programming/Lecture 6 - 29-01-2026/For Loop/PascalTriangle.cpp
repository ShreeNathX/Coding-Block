#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {

        // Spaces (though currently unnecessary)
        for (int j = n - 1; j >= 1; j--) {
            cout << "  ";
        }

        int x = 0;
        int power = 1;   // represents 11^0

        while (x <= n) {
            cout << power << " "<<endl;
            power *= 11; // next power of 11
            x++;
        }

        cout << endl;
    }
}
