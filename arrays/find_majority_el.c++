//Find the majority element which appears in the array greater than N/2 times
#include <bits/stdc++.h>
using namespace std;

int maj(vector<int>& nums){
    int cnt = 0,el;
    int n = nums.size();
    for(int i = 0;i<n;i++){
        if(cnt == 0){
            cnt = 1;
            el = nums[i];
        }
        else if(el == nums[i]) cnt++;
        else cnt--;
    }
    return el;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<"The number that appears in majority is "<<maj(arr);
}