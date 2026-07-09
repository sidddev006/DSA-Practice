//To find the maximum sum of the subarray
#include <bits/stdc++.h>
using namespace std;

int sum(vector<int>& nums){
    int n = nums.size();
    int max = INT_MIN;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=nums[i];
        if(sum>max) max = sum;
        if(sum<0) sum = 0;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<"The maximum sum in the subarray is "<<sum(arr);
}