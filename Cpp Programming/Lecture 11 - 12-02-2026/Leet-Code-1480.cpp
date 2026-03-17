/*
Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    for(int i = 1; i < nums.size(); i++) {
        nums[i] += nums[i-1];
    }
    return nums;
}

int main() {
    vector<int> nums1 = {1,2,3,4};
    vector<int> res1 = runningSum(nums1);
    for(int x : res1) cout << x << " ";
    cout<<endl;

    vector<int> nums2 = {1,1,1,1,1};
    vector<int> res2 = runningSum(nums2);
    for(int x : res2) cout << x << " ";
    cout<<endl;

    vector<int> nums3 = {3,1,2,10,1};
    vector<int> res3 = runningSum(nums3);
    for(int x : res3) cout << x << " ";
    cout<<endl;

    return 0;
}