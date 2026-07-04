//recursive insertion sort
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>& arr,int n){
    int j = n-1;
    if(n==0) return;
    insertion_sort(arr,n-1);
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    insertion_sort(arr,n);
    for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
}