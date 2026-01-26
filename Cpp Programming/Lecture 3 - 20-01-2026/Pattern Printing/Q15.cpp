/*
* * * * *  
    * * * *  
        * * *  
            * *  
                *  
            * *  
        * * *  
    * * * *  
* * * * * 
*/

#include <iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=(i-1)*2; j++){
            cout<<"  ";
        }
        for(int k=1; k<=n-i+1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=1; i<n; i++){
        for(int j=1; j<=2*(n-i-1); j++){
            cout<<"  ";
        }
        for(int k=1; k<=i+1; k++){
            cout<<"* ";
         }
    cout<<endl;
    }
}
