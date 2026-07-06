//union of two sorted arrays
#include <bits/stdc++.h>
using namespace std;

vector<int> unionarr(vector<int>& arr1, vector<int>& arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0,j =0;
    vector<int> uarr;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(uarr.empty() || uarr.back() != arr1[i])
                uarr.push_back(arr1[i]);
            i++;
            
        }
        else{
            if(uarr.empty() || uarr.back() != arr2[j])
                uarr.push_back(arr2[j]);
            j++;            
        }
    }
    while(i<n1){
        if(uarr.empty() || uarr.back() != arr1[i])
                uarr.push_back(arr1[i]);
        i++;
    }
    while(j<n2){
        if(uarr.empty() || uarr.back() != arr2[j])
                uarr.push_back(arr2[j]);
            j++;            
    }
    return uarr;

}
int main(){
    int n1,n2;
    cout<<"Size of first array: ";
    cin>>n1;
    vector<int> arr1(n1);
    cout<<"First array: ";
    for(int i = 0;i<n1;i++) cin>>arr1[i];
    cout<<"Size of second array: ";
    cin>>n2;
    vector<int> arr2(n2);
    cout<<"Second array: ";
    for(int i = 0;i<n2;i++) cin>>arr2[i];
    vector<int> unarr = unionarr(arr1,arr2);
    cout<<"Union of both the arrays: ";
    for(int i = 0;i<unarr.size();i++) cout<<unarr[i]<<" ";
}