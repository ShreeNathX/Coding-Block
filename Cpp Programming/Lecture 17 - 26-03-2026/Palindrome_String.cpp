#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string a, b;
    cout<<"Enter First String: ";
    getline(cin, a);

    cout<<"Enter Second String: ";
    getline(cin, b);

    reverse(a.begin(), a.end());

    if(a == b){
        cout<<"Palindrome.";
    }else{
        cout<<"Not Palindrome.";
    }
    return 0;
}