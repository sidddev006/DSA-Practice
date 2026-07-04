//Linear Search
#include <bits/stdc++.h>
using namespace std;

int LS(vector<int>& arr, int target){
    int n = arr.size();
    for(int i = 0;i<n;i++){
        if(arr[i]== target) return i;
    }
    return -1;
}
int main(){
    int n,target;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<"Enter number to be found: ";
    cin>>target;
    int find = LS(arr, target);
    if(find != -1) cout<<"The element "<<target<<" is present in the array at index "<<find;
    else cout<<"The element "<<target<<" is not present in the array";
}