//To count the subarrays with given xor k
#include <bits/stdc++.h>
using namespace std;

int len(vector<int>& nums, int k){
    unordered_map<int,int> mpp;
    int n = nums.size();
    mpp[0] = 1;
    int preXor = 0, count = 0;
    for(int i = 0;i<n;i++){
        preXor ^= nums[i];
        int remain = preXor ^ k;
        count += mpp[remain];
        mpp[preXor]++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int k;
    cin>>k;
    cout<<"The number of subarrays whose xor equals "<<k<<" are "<<len(arr, k);
}
