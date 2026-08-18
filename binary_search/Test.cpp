#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7,3,5,4,9};
    int n = sizeof (arr)/4;
    int mini;
        for(int j =0;j<=n-2;j++ ){
            mini = j;
            for(int i=j;i<=n-1;i++){
                if(arr[i] < arr[mini]){
                    mini = i;
                }
            }
        int temp = arr[j];
        arr[j] = arr[mini];
        arr[mini] = temp;
        }

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}