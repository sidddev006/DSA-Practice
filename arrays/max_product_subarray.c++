//To find a subarray that has the largest product and return the product
#include <bits/stdc++.h>
using namespace std;

int maxPro(vector<int>& nums){
    int n = nums.size();
    int prefix = 1, suffix = 1, maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;
        prefix *= nums[i];
        suffix *= nums[n-i+1];
        maxi = max(maxi, max(prefix, suffix));
    }
    return maxi;
}

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<"The maximum produvt subarray is : "<<maxPro(arr);
    return 0;
}