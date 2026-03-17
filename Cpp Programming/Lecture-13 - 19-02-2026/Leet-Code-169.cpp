/*
Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate=0,count=0;
    for(int x:nums) {
        if(count==0) candidate=x;
        count+=(x==candidate)?1:-1;
    }
    return candidate;
}

int main() {
    vector<int> a1={3,2,3};
    cout<<majorityElement(a1)<<endl;

    vector<int> a2={2,2,1,1,1,2,2};
    cout<<majorityElement(a2)<<endl;

    return 0;
}