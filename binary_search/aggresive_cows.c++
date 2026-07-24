// To find the minimum distance where distance is max
#include <bits/stdc++.h>
using namespace std;

bool canWeplace(vector<int>& arr, int dist, int cows){
    int cntcows = 1, last = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i] - last >= dist){
            cntcows++;
            last = arr[i];
        }
    }
    return cntcows>=cows;
}
int mini(vector<int>& arr, int cows){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int low = 1, high = arr[n - 1] - arr[0];
    while(low <= high){
        int mid = low + (high - low)/2;
        if(canWeplace(arr, mid, cows) == true) low = mid + 1;
        else high = mid - 1;
    }
    return high;
}
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int k; cin>>k;
    cout<<num(arr, k);
}