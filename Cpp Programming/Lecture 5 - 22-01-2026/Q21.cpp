/*
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=2; j<=n+4-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=n+4; k++){
            cout<<"* "; 
        }
        cout<<endl;
    }
}