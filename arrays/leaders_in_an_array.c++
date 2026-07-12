// To generate the leaders in an array
#include<bits/stdc++.h>
using namespace std;

vector<int>leader(vector<int>& nums){
    vector<int> ans;
    if(nums.empty()){
        return ans;
    }
    int n = nums.size();
    int maxi = nums[n-1];
    ans.push_back(maxi);
    for(int i = n-2;i>=0;i++){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
            max = nums[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    leader(arr);
    cout<<"The leader array: ";
    for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
}
