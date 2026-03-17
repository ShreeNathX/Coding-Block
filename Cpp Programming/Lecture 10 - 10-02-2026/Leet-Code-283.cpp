#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) swap(nums[i], nums[j++]);
    }
}

int main() {
    vector<int> nums1 = {0,1,0,3,12};
    moveZeroes(nums1);
    for (int x : nums1) cout << x << " ";
    cout << endl;

    vector<int> nums2 = {0};
    moveZeroes(nums2);
    for (int x : nums2) cout << x << " ";
}