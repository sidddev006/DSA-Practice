//To merge two sorted arrays without using any extra space
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int n, vector<int>& nums2, int m){
    int i = n-1, j = m-1, k = m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i]> nums2[j])
            nums1[k--] = nums1[i--];
        else 
            nums1[k--] = nums2[j--];
    }
    while(j>=0) nums1[k--] = nums2[j--];
}
int main(){
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};
    int m = 3, n = 3;

    merge(nums1, m, nums2, n);

    // Print merged array
    for (int num : nums1) cout << num << " ";
    return 0;

}