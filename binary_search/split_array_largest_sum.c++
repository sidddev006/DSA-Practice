// To split the array into k subarrays such that the max subarray sum is minimum
#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int>& arr, int mid, int k){
    int sum = 0, splits = 1;
    int n = arr.size();
    for(int i = 0;i<n;i++){
        if(sum + arr[i]<= mid) sum += arr[i];
        else{
            sum = arr[i];
            splits++;
        }
    }
    return splits<=k;
}
int mini(vector<int>& arr, int m){
    int n = arr.size();
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while(low <= high){
        int mid = low + (high - low)/2;
        if(possible(arr, mid, k) == true) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int k; cin>>k;
    cout<<num(arr, k);
}