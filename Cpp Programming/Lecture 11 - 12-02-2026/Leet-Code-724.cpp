/*
Example 1:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
Example 2:

Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.
Example 3:

Input: nums = [2,1,-1]
Output: 0
Explanation:
The pivot index is 0.
Left sum = 0 (no elements to the left of index 0)
Right sum = nums[1] + nums[2] = 1 + -1 = 0
*/

#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& arr) {
    int total=0;
    for(int x:arr) total+=x;
    int left=0;
    for(int i=0;i<arr.size();i++) {
        if(left==total-left-arr[i]) return i;
        left+=arr[i];
    }
    return -1;
}

int main() {
    vector<int> a1={1,7,3,6,5,6};
    cout<<pivotIndex(a1)<<endl;

    vector<int> a2={1,2,3};
    cout<<pivotIndex(a2)<<endl;

    vector<int> a3={2,1,-1};
    cout<<pivotIndex(a3)<<endl;
    return 0;
}