#include<iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout<<"Enter the digit: ";
    cin>>n;

    for(int i = 0; i<=n; i++){
        sum+=i;
    }
    cout<<"The sum of digits is: "<<sum;
    return 0;
}