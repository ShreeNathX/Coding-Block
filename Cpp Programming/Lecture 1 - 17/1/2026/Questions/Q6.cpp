//Q6. Grade Card Program (Based on Marks)

#include<iostream>
using namespace std;

int main(){
    int score;
    cout<<"Enter the score: ";
    cin>>score;

    if(score >= 90){
        cout<<"A+ grade.";
    }else if(score >= 80 && score < 90){
        cout<<"A grade.";
    }else if(score >= 70 && score < 80){
        cout<<"B+ grade.";
    }else if(score >= 60 && score < 70){
        cout<<"B grade.";
    }else if(score >= 50 && score < 60){
        cout<<"C+ grade.";
    }else if(score >= 40 && score < 50){
        cout<<"C grade.";
    }else if(score >=0 && score < 40){
        cout<<"Fail.";
    }else{
        cout<<"Invalid Marks";
    }
    return 0;
}