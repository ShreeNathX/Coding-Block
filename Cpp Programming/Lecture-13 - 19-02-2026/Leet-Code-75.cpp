/*
Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Example 2:
Input: nums = [2,0,1]
Output: [0,1,2]
*/

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int low=0, mid=0, high=nums.size()-1;
    while(mid<=high) {
        if(nums[mid]==0) {
            swap(nums[low],nums[mid]);
            low++; mid++;
        } else if(nums[mid]==1) {
            mid++;
        } else {
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}

int main() {
    vector<int> a1={2,0,2,1,1,0};
    sortColors(a1);
    for(int x:a1) cout<<x<<" ";
    cout<<endl;

    vector<int> a2={2,0,1};
    sortColors(a2);
    for(int x:a2) cout<<x<<" ";
    cout<<endl;

    return 0;
}