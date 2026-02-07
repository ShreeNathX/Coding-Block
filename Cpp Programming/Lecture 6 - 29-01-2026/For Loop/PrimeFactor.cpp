#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    int i=2;
    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
        else{
            i++;
        }
    }
}