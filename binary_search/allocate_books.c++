// To allocate books to students
#include <bits/stdc++.h>
using namespace std;

int stud(vector<int>& arr, int pages){
    int stu = 1, pagesStudied = 0;
    int n = arr.size();
    for(int i = 0;i<n;i++){
        if(pagesStudied + arr[i]<= pages) pagesStudied += arr[i];
        else{
            pagesStudied = arr[i];
            stu++;
        }
    }
    return stu;
}
int mini(vector<int>& arr, int m){
    int n = arr.size();
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while(low <= high){
        int mid = low + (high - low)/2;
        int nS = stud(arr, mid);
        if(nS > m) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int k; cin>>k;
    cout<<num(arr, k);
}