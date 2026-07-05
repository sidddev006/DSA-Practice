//move all zeros to the end of the array
#include <bits/stdc++.h>
using namespace std;

void movezero(vector<int>& arr){
    int n = arr.size();
    int j = -1;
    for(int i = 0;i<n;i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    for(int i = j;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    movezero(arr);
    for(int i = 0;i<n;i++) cout<<arr[i]<<" ";
}