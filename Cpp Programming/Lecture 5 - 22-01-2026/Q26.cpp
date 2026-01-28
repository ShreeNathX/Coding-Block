/*
        1  
      1 2 3  
    1 2 3 4 5  
  1 2 3 4 5 6 7  
1 2 3 4 5 6 7 8 9 
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=i*2-1; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}