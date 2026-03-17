/*
Example 1:

Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.
Example 2:

Input: nums = [4,5,6,7,0,1,2]
Output: 0
Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.
Example 3:

Input: nums = [11,13,15,17]
Output: 11
Explanation: The original array was [11,13,15,17] and it was rotated 4 times. 
*/

#include <iostream>
#include <vector>
using namespace std;

int findmin(vector<int> &nums){
    int l = 0, r = nums.size()-1;
    while (l<r){
        int mid = l + (r - l) / 2;
        if(nums[mid] > nums[r]){
            l = mid + 1;
        }else{
            r = mid;
        }
    }
    return nums[l];
}

int main(){
    vector<int> nums1 = {3,4,5,1,2};
    vector<int> nums2 = {4,5,6,7,0,1,2};
    vector<int> nums3 = {11,13,15,17};

    cout<<findmin(nums1)<<endl;
    cout<<findmin(nums2)<<endl;
    cout<<findmin(nums3)<<endl;

    return 0;
}