//recursive bubble sort
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>& arr,int n){
    if(n==1) return;
    for(int i = 0;i<n-1;i++){
        if(arr[i+1]<arr[i]) swap(arr[i+1], arr[i]);
    }
    bubble_sort(arr,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    bubble_sort(arr,n);
    for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
}