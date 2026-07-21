// To find the minimum element in a rotated sorted array
#include <bits/stdc++.h>
using namespace std;

int index(vector<int>& arr){
    int n = arr.size();
    int low = 0, high = n-1;
    int ans = INT_MAX;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[low]<= arr[mid]){
            ans = min(ans, arr[mid]);
            low = mid +1;
        }
        else{
            high = mid - 1;
            ans = min(ans, arr[mid]);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<"The minimum element in the rotated sorted array is "<<index(arr);
}