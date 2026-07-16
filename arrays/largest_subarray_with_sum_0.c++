//To find the largest subarray with sum 0
#include <bits/stdc++.h>
using namespace std;

int larsub(vector<int>& nums){
    int n = nums.size();
    int count = 0, maxi = INT_MIN, preSum = 0;
    unordered_map<int,int> mpp;
    mpp[0] = -1;
    for(int i = 0;i<n;i++){
        preSum += nums[i];
        if(mpp.find(preSum) != mpp.end()){
            maxi = max(maxi, i - mpp[preSum]);
        }
        else mpp[preSum] = i;
    }
    if(maxi == INT_MIN) maxi = 0;
    return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<"The length of the largest subarray with sum  0 is: "<<larsub(arr);
}