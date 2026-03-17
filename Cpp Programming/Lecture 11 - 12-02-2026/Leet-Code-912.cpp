/*
Example 1:

Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).
Example 2:

Input: nums = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]
Explanation: Note that the values of nums are not necessarily unique.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortArray(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr;
}

int main() {
    vector<int> a1={5,2,3,1};
    vector<int> r1=sortArray(a1);
    for(int x:r1) cout<<x<<" ";
    cout<<endl;

    vector<int> a2={5,1,1,2,0,0};
    vector<int> r2=sortArray(a2);
    for(int x:r2) cout<<x<<" ";
    cout<<endl;

    return 0;
}