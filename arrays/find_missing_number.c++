// find missing number
#include <bits/stdc++.h>
using namespace std;

int missnum(vector<int>& arr,int n){
    int n1 = arr.size();
    int sum = n*(n+1)/2;
    int s = 0;
    for(int i = 0;i<n1;i++) s += arr[i];
    return sum - s; 
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for(int i =0;i<n-1;i++) cin>>arr[i];
    cout<<"The missing number is : "<<missnum(arr,n);
}