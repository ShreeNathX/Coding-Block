//Q2. Simple Interest Calculation

#include<iostream>
using namespace std;

int main(){
    int p, t, r, s;
    cout<<"Enter principle amount: "<<endl;
    cin>>p;
    cout<<"Enter time in years: "<<endl;
    cin>>t;
    cout<<"Enter rate of interest: "<<endl;
    cin>>r;

    s = (p*t*r)/100;
    cout<<"The simple interest is: "<<s;
    return 0;
}