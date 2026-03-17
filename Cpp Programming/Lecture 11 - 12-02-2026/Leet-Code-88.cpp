/*
Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].
Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
*/

#include <iostream>
#include <vector>
using namespace std;

void mergeArrays(vector<int>& nums1,int m,vector<int>& nums2,int n) {
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 && j>=0) {
        if(nums1[i]>nums2[j]) nums1[k--]=nums1[i--];
        else nums1[k--]=nums2[j--];
    }
    while(j>=0) nums1[k--]=nums2[j--];
}

int main() {
    vector<int> a1={1,2,3,0,0,0};
    vector<int> b1={2,5,6};
    mergeArrays(a1,3,b1,3);
    for(int x:a1) cout<<x<<" ";
    cout<<endl;

    vector<int> a2={1};
    vector<int> b2={};
    mergeArrays(a2,1,b2,0);
    for(int x:a2) cout<<x<<" ";
    cout<<endl;

    vector<int> a3={0};
    vector<int> b3={1};
    mergeArrays(a3,0,b3,1);
    for(int x:a3) cout<<x<<" ";
    cout<<endl;

    return 0;
}