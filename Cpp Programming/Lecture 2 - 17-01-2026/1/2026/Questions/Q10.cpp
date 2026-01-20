//Q10. Find the Factorial of a Number

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n==0 && n==1){
        cout<<"The factorial of "<<n<<" is: 1";
    }else{
        int fac = 1;
        for(int i=1; i<=n; i++){
            fac *= i;
        }
        cout<<"The factorial of "<<n<<" is: "<<fac;
    }
    return 0;
}