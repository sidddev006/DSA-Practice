//To implement upper bound
#include <bits/stdc++.h>
using namespace std;

int index(vector<int>& nums, int target){
    int n = nums.size();
    int low = 0, high = n -1;
    int index = n;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid]>target){
            index = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return index;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int target;
    cin>>target;
    int var = index(arr, target);
    
    cout<<"The upper bound is "<< var;
}