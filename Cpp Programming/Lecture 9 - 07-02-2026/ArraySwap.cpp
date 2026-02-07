#include<iostream>
using namespace std;

int main(){
    int A[5] = {2, 4, 5, 6, 7};
    int B[5] = {10, 11, 24, 56, 8};
    int temp[5];
    for(int i=0; i<5; i++){
        temp[i] = A[i];
        A[i] = B[i]; 
        B[i] = temp[i];
    }
    //Output
    for(int i=0; i<5; i++){
       cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<5; i++){
       cout<<B[i]<<" ";
    }
    return 0;
}