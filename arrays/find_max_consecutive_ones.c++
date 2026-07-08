// to find the maximum consecutive ones
#include <bits/stdc++.h>
using namespace std;

int maxones(vector<int>& arr){
    int n = arr.size();
    int max1 = 0;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            max1 = max(max1,cnt);
        }
        else
            cnt = 0;
    }
    return max1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    cout<<"The maximmum number of consecutive ones = "<<maxones(arr);
}