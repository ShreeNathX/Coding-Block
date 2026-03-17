/*
Example 1:

Input: nums = [3,0,1]

Output: 2

Explanation:

n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

Example 2:

Input: nums = [0,1]

Output: 2

Explanation:

n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]

Output: 8

Explanation:

n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
*/

#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int>& arr) {
    int n=arr.size();
    int expected=n*(n+1)/2;
    int actual=0;
    for(int x:arr) actual+=x;
    return expected-actual;
}

int main() {
    vector<int> a1={3,0,1};
    cout<<findMissing(a1)<<endl;

    vector<int> a2={0,1};
    cout<<findMissing(a2)<<endl;

    vector<int> a3={9,6,4,2,3,5,7,0,1};
    cout<<findMissing(a3)<<endl;

    return 0;
}