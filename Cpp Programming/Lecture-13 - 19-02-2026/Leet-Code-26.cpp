/*
Example 1:
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

Example 2:
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.empty()) return 0;
    int k=1;
    for(int i=1;i<nums.size();i++) {
        if(nums[i]!=nums[k-1]) {
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    vector<int> a1={1,1,2};
    int k1=removeDuplicates(a1);
    cout<<k1<<endl; // Output: 2
    for(int i=0;i<k1;i++) cout<<a1[i]<<" ";
    cout<<endl;

    vector<int> a2={0,0,1,1,1,2,2,3,3,4};
    int k2=removeDuplicates(a2);
    cout<<k2<<endl; // Output: 5
    for(int i=0;i<k2;i++) cout<<a2[i]<<" ";
    cout<<endl;

    return 0;
}