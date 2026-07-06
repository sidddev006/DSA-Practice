//to find the intersection of two arrays
#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& a1, vector<int>& a2){
    int n1 = a1.size();
    int n2 = a2.size();
    int i = 0,j = 0;
    vector<int> inst;
    while(i<n1&&j<n2){
        if(a1[i]<a2[j]) i++;
        else if (a2[j]<a1[i]) j++;
        else{
            inst.push_back(a1[i]);
            i++;
            j++;
        }
    }
    return inst;
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
    vector<int> ins = intersect(arr1,arr2);
    cout<<"Intersection of both the arrays: ";
    for(int i = 0;i<ins.size();i++) cout<<ins[i]<<" ";
}