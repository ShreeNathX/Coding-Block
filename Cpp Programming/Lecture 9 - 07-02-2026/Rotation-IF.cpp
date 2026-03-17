#include<iostream>
using namespace std;

int main(){
    int A[]={1, 3, 4, 5, 7};
    int B[10], C[10], n=5, bi = 0, ci = 0;;
    for(int i=0; i<n; i++){
        if(i<n-2){
            B[bi++]=A[i];
        }else{
            C[ci++]=A[i];
        }
    }
    int k=0, Ans[10];
    for(int i=0; i<n-3; i++){
        Ans[k++]=C[i];
    }
    for(int i=0; i<n-2; i++){
        Ans[k++]=B[i];
    }
    for(int i=0; i<n; i++){
        cout<<Ans[i]<<" ";
    }
}