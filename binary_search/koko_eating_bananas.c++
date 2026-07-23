//To return the minimum integer k such that koko can eat all bananas
#include <bits/stdc++.h>
using namespace std;

int maxele(vector<int>& nums){
    int n = nums.size();
    int maxi = INT_MIN;
    for(int i = 0;i<n;i++) maxi = max(maxi, nums[i]);
    return maxi;
}
int totalHour(vector<int>& arr, int hourly){
    int tH = 0;
    int n = arr.size();
    for(int i = 0;i<n;i++){
        tH += ceil((double)arr[i]/(double)hourly);
    }
    return tH;
}
int banana(vector<int>& nums, int h){
    int low = 1, high = maxele(nums);
    while(low <= high){
        int mid = low + (high - low)/2;
        int totalH = totalHour(nums, mid);
        if(totalH <= h) high = mid - 1;
        else low = mid + 1;
    }
    return low;
}
int main(){
    int n, h;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cin>>h;
    cout<<"Minimum time taken to eat bananas is "<<banana(arr, h);
}