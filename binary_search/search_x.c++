// Search target in a sorted array
#include <bits/stdc++.h>
using namespace std;

int index(vector<int>& nums, int target){
    int n = nums.size();
    int low = 0, high = n -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int target;
    cin>>target;
    int var = index(arr, target);
    if(var == -1) cout<<"The target value "<<target<<" is not present in the array";
    else 
    cout<<"The target value "<<target<<" is present in the array at index "<<var;
}