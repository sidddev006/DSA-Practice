//To find the kth element of two sorted arrays
#include <bits/stdc++.h>
using namespace std;

int kth(vector<int>& nums1, vector<int>& nums2, int k){
    int n1 = nums1.size();
    int n2 = nums2.size();
    int low = max(k-n2, 0), high = min(k, n1);
    int n = n1 + n2;
    int left = k;
    while(low <= high){
        int mid1 = (low + high)>>1;
        int mid2 = left - mid1;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if(mid1 < n1) r1 = nums1[mid1];
        if(mid2 < n2) r2 = nums2[mid2];
        if(mid1 - 1 >= 0) l1 = nums1[mid1 - 1];
        if(mid2 - 1 >= 0) l2 = nums2[mid2 - 1];
        if(l1 <= r2 && l2 <= r1){
            return max(l1, l2);
        }
        else if(l1 > r2) high = mid1 - 1;
        else low = mid1 + 1;
    }
    return 0;
}
int main(){
    int n1; cin>>n1;
    vector<int> arr(n1);
    for(int i = 0;i<n1;i++) cin>>arr[i];
    int n2; cin>>n2;
    vector<int> nums(n2);
    for(int i = 0;i<n2;i++) cin>>nums[i];
    int k; cin>>k;
    cout<<kth(arr, nums, k);
}