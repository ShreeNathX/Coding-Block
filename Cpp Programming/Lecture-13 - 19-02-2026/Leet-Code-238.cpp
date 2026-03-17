/*
Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    vector<int> res(n,1);
    int left=1;
    for(int i=0;i<n;i++) {
        res[i]=left;
        left*=nums[i];
    }
    int right=1;
    for(int i=n-1;i>=0;i--) {
        res[i]*=right;
        right*=nums[i];
    }
    return res;
}

int main() {
    vector<int> a1={1,2,3,4};
    vector<int> r1=productExceptSelf(a1);
    for(int x:r1) cout<<x<<" ";
    cout<<endl;

    vector<int> a2={-1,1,0,-3,3};
    vector<int> r2=productExceptSelf(a2);
    for(int x:r2) cout<<x<<" ";
    cout<<endl;

    return 0;
}