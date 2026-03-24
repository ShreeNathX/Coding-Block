#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1, s2;
    cout<<"Enter S1: ";
    getline(cin, s1);
    cout<<"Enter S2: ";
    getline(cin, s2);

    
    cout<<s1.compare(s2);
    return 0;
}