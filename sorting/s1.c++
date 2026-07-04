// implementing selection sort
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++)
        cin>>arr[i];
    int mini;
    for(int i = 0; i<= n - 2; i++){
        mini = i;
        for(int j = i;j <= n-1; j++ ){
            if(arr[j]< arr[mini]) mini = j;
        }
        swap(arr[i], arr[mini]);
    }
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}