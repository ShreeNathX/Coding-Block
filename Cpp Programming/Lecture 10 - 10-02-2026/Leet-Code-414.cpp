/*
Example 1:

Input: nums = [3,2,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2.
The third distinct maximum is 1.
Example 2:

Input: nums = [1,2]
Output: 2
Explanation:
The first distinct maximum is 2.
The second distinct maximum is 1.
The third distinct maximum does not exist, so the maximum (2) is returned instead.
Example 3:

Input: nums = [2,2,3,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2 (both 2's are counted together since they have the same value).
*/

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int thirdMax(vector<int>& nums) {
    set<int> distinct(nums.begin(), nums.end());
    vector<int> arr(distinct.begin(), distinct.end());
    sort(arr.rbegin(), arr.rend());
    
    if (arr.size() >= 3) return arr[2];
    return arr[0];
}

int main() {
    vector<int> nums1 = {3,2,1};
    cout << thirdMax(nums1) << endl;
    
    vector<int> nums2 = {1,2};
    cout << thirdMax(nums2) << endl;
    
    vector<int> nums3 = {2,2,3,1};
    cout << thirdMax(nums3) << endl;
    
    return 0;
}