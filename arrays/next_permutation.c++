//To calculate the next permutation
#include <bits/stdc++.h>
using namespace std;

void nextper(vector<int>& nums){
    int index = -1;
    int n = nums.size();
    for(int i = n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(nums.begin(),nums.end());
        return;
    }
    for(int i = n-1;i>index;i--){
        if(nums[i]>nums[index]){
            swap(nums[i],nums[index]);
            break;
        }
    }
    reverse(nums.begin()+index+1,nums.end());
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    nextper(arr);
    cout<<"The permutated array: ";
    for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
}
