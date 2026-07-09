//Sort an array of 0s,  1s and 2s
#include <bits/stdc++.h>
using namespace std;

void sort_arr(vector<int>& nums){
    int n = nums.size();
    int left = 0,mid = 0,right = n - 1;
    while(mid<=right){
        if(nums[mid]==0){
            swap(nums[left],nums[mid]);
            left++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[right]);
            right--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    sort_arr(arr);
    cout<<"The sorted version of the original array is ";
    for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
}