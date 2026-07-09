// two sum problem
#include <bits/stdc++.h>
using namespace std;

vector<int>pos(vector<int>& nums, int target){
    int n = nums.size();
    map<int,int>mpp;
    for(int i = 0;i<n;i++){
        int rem = target - nums[i];
        if(mpp.find(rem)!=mpp.end())
            return {mpp[rem], i};
        mpp[nums[i]] =  i; 
    }
    return {};
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    vector<int> temp = pos(arr, target);
    if(temp.empty())
     cout<<"There are no two numbers in the array whose sum is "<<target;
    else
        cout<<"The numbers whose sum is equal to "<<target<<" are present at index "<<temp[0]<<" and "<<temp[1];
}