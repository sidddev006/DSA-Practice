//left rotate an array by d places
#include <bits/stdc++.h>
using namespace std;

void leftrotatebyd(vector<int>& arr, int d){
    int n = arr.size();
    d = d % n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}
int main(){
    int n,d;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<"Enter d: ";
    cin>>d;
    leftrotatebyd(arr,d);
    for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
}