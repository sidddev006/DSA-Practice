//To find the least capacity to ship packages within D days
#include <bits/stdc++.h>
using namespace std;

int day(vector<int>& weights, int cap){
        int days = 1, load = 0;
        int n = weights.size();
        for(int i = 0;i<n;i++){
            if(weights[i] + load > cap){
                days += 1;
                load = weights[i];
            }
            else load+= weights[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = *max_element(weights.begin(), weights.end());
        int sum = accumulate(weights.begin(), weights.end(), 0);
        int low = maxi, high = sum;
        while(low <= high){
            int mid = low + (high - low)/2;
            int nod = day(weights, mid);
            if(nod <= days) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
    int main(){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0;i<n;i++) cin>>arr[i];
        int days;
        cin>>days;
        cout<<"The least capacity to shift will be "<<shipWithinDays(arr,days);
    }