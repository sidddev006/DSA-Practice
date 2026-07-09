//to find longest subarray with sum k which consists of positive number only
#include <bits/stdc++.h>
using namespace std;

int longestsub(vector<int>& nums, int k){
    int left = 0,right = 0;
    long long sum = 0;
    int maxLen = 0;
    int n = nums.size();
    while(right<n){
        while(right<n&& sum>k){
            sum-=nums[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right<n) sum+= nums[right];
    }
    return maxLen;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int k;
    cout<<"Enter the sum that you want to find: ";
    cin>>k;
    cout<<"The longest subarray with sum "<<k<<" is "<<longestsub(arr,k);
}