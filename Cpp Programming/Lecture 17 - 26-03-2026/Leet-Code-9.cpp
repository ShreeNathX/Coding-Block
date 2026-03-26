#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int temp = num, rev_num = 0;

    while(num > 0){
        rev_num = rev_num * 10 + num % 10;
        num = num/10;
    }

    if (rev_num == temp){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
    return 0;
}