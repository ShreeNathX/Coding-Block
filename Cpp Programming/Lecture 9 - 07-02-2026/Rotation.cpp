#include<iostream>
using namespace std;
int main(){
    int A[]={1, 3, 4, 5, 7};
    int B[3], C[2], n=5;
    for(int i=0; i<n-2; i++){
        B[i]=A[i];
    }
    for(int i=0; i<n-3; i++){
        C[i]=A[i+3];
    }

    int k=0, Ans[5];
    for(int i=0; i<n-3; i++){
        Ans[k++]=C[i];
    }
    for(int i=0; i<n-2; i++){
        Ans[k++]=B[i];
    }
    for(int i=0; i<n; i++){
        cout<<Ans[i]<<" ";
    }
    return 0;
}