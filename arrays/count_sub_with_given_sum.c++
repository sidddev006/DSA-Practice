//To count the subarrays whose sum equals k
#include <bits/stdc++.h>
using namespace std;

int count(vector<int>& nums, int k){
    int n = nums.size();
    unordered_map<int,int> mpp;
    int preSum = 0,count = 0;
    for(int i = 0;i<n;i++){
        preSum+= nums[i];
        int remove = preSum - k;
        count+= mpp[remove];
        mpp[preSum]++;
    }
    return count;
}
int main(){
    int n,k;
    cin>>n;
    cout<<"Enter k: ";
    cin>>k;
    vector<int> arr(n);
    cout<<"Array: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The number of subarrays with sum "<<k<<" is : "<<count(arr,k);
}