/*
      *  
    * * *  
  * * * * *  
* * * * * * *  
  * * * * *  
    * * *  
      * 
*/

#include<iostream>
using namespace std;

int main(){
    int n=7;
    int mid = n/2+1;

    for(int i=1; i<=n; i++){
      if(i<=mid){
        for(int j=1; j<=n+i-1; j++){
          cout<<"* ";
        }
      }else{
        for(int j=1; j<=n-i+1; j++){
          cout<<"* ";
        }
      }
      for(int k=1; k<=n; k++){
        cout<<"  ";
      }
      cout<<endl;
    }
}