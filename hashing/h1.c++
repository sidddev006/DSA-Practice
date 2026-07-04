#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }
    int q;
    cout<<"How many attempts you want to find the array? ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the number to find ";
        cin>>number;
        cout<<hash[number]<<endl;
    }
}