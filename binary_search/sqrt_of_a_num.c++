//To find the square root of a number using binary search
#include <bits/stdc++.h>
using namespace std;

int sq(int n){
    int low = 1, high = n, ans = 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(mid * mid <= n){
            ans = mid;
            low = mid +1;
        }
        else high = mid - 1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<"The square root of "<<n<<" is "<<sq(n);
}