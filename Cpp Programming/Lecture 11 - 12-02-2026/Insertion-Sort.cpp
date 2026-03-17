#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n=arr.size();
    for(int i=1;i<n;i++) {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main() {
    vector<int> a={5,2,9,1,5,6};
    insertionSort(a);
    for(int x:a) cout<<x<<" ";
    cout<<endl;
    return 0;
}

// Output: 1 2 5 5 6 9