#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5, 6, 7, 8};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

// Array cannot store after a fixed size.
// It throw error