//Q13. Reverse a Number using a While Loop

#include<iostream>
using namespace std;

int main(){
    int n, result=0, rem;
    cout<<"Enter the number to be reversed: ";
    cin>>n;
    while (n != 0){
        rem = n%10;
        result = result * 10 + rem;
        n /=10;
    }
    cout<<"The reversed number of "<<n<<" is: "<<result;
    return 0;
}