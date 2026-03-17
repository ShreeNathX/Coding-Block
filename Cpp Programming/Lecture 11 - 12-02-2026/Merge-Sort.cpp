#include<iostream>
using namespace std;

class solution{
    public:
    vector<int> sortArray(vector)

    void merge(vector<int> nums, int low, int mid, int high){
        vector<int>temp;
        int left=low, right = high;
        while(left<= mid && right <= high){
            if(nums[left] <= nums[right]){
                temp.push_back(nums[left++]);
            }else{
                temp.push_back(nums[right++];)
            }
        }
    }
}