// To calculate the longest consecutive sequencce
#include <bits/stdc++.h>
using namespace std;

int longest_seq(vector<int>& nums){
    int n = nums.size();
    int longest = 1;
    if(n == 0) return 0;
    unordered_set<int> st;
    for(int i = 0;i<n;i++) st.insert(nums[i]);
    for(auto it: st){
        if(st.find(it - 1) == st.end()){
            int x = it;
            int cnt = 1;
            while(st.find(x+1) != st.end()){
                x++;
                cnt++;
            }
            longest = max(cnt, longest);
        }        
    }
    return longest;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    int longest = longest_seq(arr);
    cout<<"The longest consecutive sequence is : "<<longest;
}