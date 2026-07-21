//To find the first and last occurence of an element in a sorted array
#include <bits/stdc++.h>
using namespace std;

int first(vector<int>& nums, int x){
    int n = nums.size();
    int low = 0, high = n-1;
    int fir = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == x){
            fir = mid;
            high = mid -1;
        }
        else if(x > nums[mid]) low = mid +1;
        else high = mid -1;
    }
    return fir;
}
int last(vector<int>& nums, int x){
    int n = nums.size();
    int low = 0, high = n-1;
    int la = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == x){
            la = mid;
            low = mid +1;
        }
        else if(x > nums[mid]) low = mid +1;
        else high = mid -1;
    }
    return la;
}
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int target;
    cin>>target;
    vector<int> ans = {first(arr, target), last(arr, target)};
    cout<<"The first and last occurence of "<<target<<" in the array are "<<ans[0]<<" and "<<ans[1]<<" respectively";
}