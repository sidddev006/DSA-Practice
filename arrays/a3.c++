//check if the array is sorted
#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr, int n){
    for(int i = 1;i<n;i++){
        if(arr[i-1]>arr[i]) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<boolalpha<<"Is the array Sorted? "<<isSorted(arr,n);//boolalpha tells the cout to print true/false instead of 0/1
}