/*
Example 1:
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

Example 2:
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
*/

#include <iostream>
using namespace std;

int mySqrt(int x) {
    if(x==0 || x==1) return x;
    int left=1, right=x, ans=0;
    while(left<=right) {
        long long mid = left + (right-left)/2;
        if(mid*mid==x) return mid;
        if(mid*mid<x) {
            ans=mid;
            left=mid+1;
        } else {
            right=mid-1;
        }
    }
    return ans;
}

int main() {
    cout<<mySqrt(4)<<endl;
    cout<<mySqrt(8)<<endl;
    return 0;
}