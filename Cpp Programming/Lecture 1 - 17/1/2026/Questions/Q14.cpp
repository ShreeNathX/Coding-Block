/*Lottry game
You are given a number n.
You have to determine what the person wins based on the following conditions:

If n >= 300 and n <= 460, the prize is MacBook.

If n >= 200 and n <= 280, the prize is Kurkure.

If n >= 1100 and n <= 1500, the prize is Cycle.

If n > 50 and n <= 80, the prize is Bike.

For all other values of n, print "Better luck next time."*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the lottery number: ";
    cin>>n;
    if(n >= 300 && n <= 460){
        cout<<"The prize is MacBook.";
    }else if(n >= 200 && n <= 280){
        cout<<"The prize is Kurkure.";
    }else if(n >= 1100 && n <= 1500){
        cout<<"The prize is Cycle.";
    }else if(n > 50 && n <= 80){
        cout<<"The prize is Bike.";
    }else{
        cout<<"Better luck next time.";
    }
    return 0;
}