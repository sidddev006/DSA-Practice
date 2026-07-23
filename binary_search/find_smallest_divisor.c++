// To find the smallest divisor within a given a threshold
#include <bits/stdc++.h>
using namespace std;

bool calcthres(vector<int>& nums, int val, int threshold){
    long long sum = 0;
    int n = nums.size();
    for(int i = 0;i<n;i++){
        sum += (nums[i] + val - 1)/val;
        if(sum > threshold) return false;
    }
    return true;
}
int sd(vector<int>& nums, int threshold){
    int n = nums.size();
    int maxi = *max_element(nums.begin(), nums.end());
    int low = 1, high = maxi;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(calcthres(nums, mid, threshold) == true) high = mid - 1;
        else low = mid + 1;
    }
    return low;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int th;
    cin>>th;
    cout<<"The smallest divisor is "<<sd(arr, th);
}