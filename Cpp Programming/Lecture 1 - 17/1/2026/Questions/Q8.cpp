//Q8. Find the Sum of N Natural Numbers

#include<iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout<<"Enter the number to find the sum til number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout<<"The sum of N natural number is: "<<sum;
    return 0;
}