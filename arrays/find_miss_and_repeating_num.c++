//To find the missing and the repeating number
#include <bits/stdc++.h>
using namespace std;

vector<int> repmis(vector<int>& nums){
    int n = nums.size();
    unordered_map<int,int> mpp;
    int repeating = -1, missing = -1;
    for(int i = 0;i<n;i++)
        mpp[nums[i]]++;

    for(int i = 1;i<=n;i++){
        if(mpp[i] == 0) missing = i;
        if(mpp[i] > 1) repeating = i;
    }
    return {repeating, missing};
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    vector<int> ans = repmis(arr);
    cout<<"The repeating number in the array is "<<ans[0]<<" and the missing number is "<<ans[1];
}