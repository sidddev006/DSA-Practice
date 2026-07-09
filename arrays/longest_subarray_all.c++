//to find longest subarray with sum k which consists of pos,neg and 0
#include <bits/stdc++.h>
using namespace std;

int longestsub(vector<int>& nums,int k){
    map<long long ,int> preSumMap;
    int maxLen =  0;
    int sum = 0;
    for(int i = 0;i<nums.size();i++){
        sum+= nums[i];
        if(sum == k) maxLen = max(maxLen, i+1);
        long long rem = sum - k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end())
            preSumMap[sum] = i;
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