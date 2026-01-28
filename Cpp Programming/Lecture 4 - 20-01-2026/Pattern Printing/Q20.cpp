/*
      *
    *    *
  *        *
*            *
  *        *
    *    *
      *
*/

#include <iostream>
using namespace std;

int main(){
    int n=7;
    int mid = n/2+1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i<=mid){
                if(j == mid-i+1 || j == mid+i-1){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }else{
                if(j == i-mid+1 || j == n-(i-mid)){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }
        }
    cout<<endl;
    }
}