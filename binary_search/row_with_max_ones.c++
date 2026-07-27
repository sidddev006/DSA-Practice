// To find the row with maximum number of ones
#include <bits/stdc++.h>
using namespace std;

int lb(vector<int>& arr, int x){
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}
int rowMax1(vector<vector<int>>& nums, int n, int m){
    int cnt_max = 0;
    int index = -1;
    for(int i = 0;i<n;i++){
        int cntOnes = m - lb(nums[i], 1);
        if(cntOnes > cnt_max){
            cnt_max = cntOnes;
            index = i;
        }
    }
    return index;
}
int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int> (m) );
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<rowMax1(arr, n, m);
}