#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    for(int i=2; i<=n; i++) {
        int count = 0;
        //Skip multiple of 3
        if(i == 3 && i%3 == 0) {
            continue;
        }

        for(int j=1; j<=i; j++) {
            if (i%j == 0) {
                count++;
            }
        }

        if (count == 2) {
            cout <<i<<" ";
        }
    }
    return 0;
}
