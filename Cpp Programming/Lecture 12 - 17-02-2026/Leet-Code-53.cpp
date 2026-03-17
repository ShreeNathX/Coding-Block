/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Example 2:
Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.

Example 3:
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
*/

#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& arr) {
    int best=arr[0],current=arr[0];
    for(int i=1;i<arr.size();i++) {
        current=max(arr[i],current+arr[i]);
        best=max(best,current);
    }
    return best;
}

int main() {
    vector<int> a1={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(a1)<<endl;

    vector<int> a2={1};
    cout<<maxSubArray(a2)<<endl;

    vector<int> a3={5,4,-1,7,8};
    cout<<maxSubArray(a3)<<endl;

    return 0;
}