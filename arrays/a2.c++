//second largest number in the array
#include <bits/stdc++.h>
using namespace std;

int slargestn(vector<int>& arr, int n){
    int largest = arr[0], slargest = INT_MIN;
    for(int i = 1;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>slargest && arr[i]!=largest) slargest = arr[i];
    }
    return slargest;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<"The second largest number in the array is: "<<slargestn(arr,n);
}