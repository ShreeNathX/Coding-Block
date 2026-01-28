/*
5 4 3 2 *  
5 4 3 * 1  
5 4 * 2 1  
5 * 3 2 1  
* 4 3 2 1  
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j == n-i+1){
                cout<<"* ";
            }else{
                cout<<n-j+1<<" ";
            }
        }
        cout<<endl;
    }
}