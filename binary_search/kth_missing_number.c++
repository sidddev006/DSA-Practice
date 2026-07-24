// To find the kth missing number
#include <bits/stdc++.h>
using namespace std;

int num(vector<int>& nums, int k){
    int n = nums.size();
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        int missing = nums[mid] - (mid + 1);
        if(missing < k) low = mid + 1;
        else high = mid - 1;
    }
    return low + k;
}
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int k; cin>>k;
    cout<<num(arr, k);
}