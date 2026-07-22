//To find the nth root of a number using binary search
#include <bits/stdc++.h>
using namespace std;

int func(int mid, int n, int m){
    long long ans = 1;
    for(int i = 1;i<=n;i++){
        ans *= mid;
        if(ans > m) return 2;
    }
    if(ans == m) return 1;
    else return 0;
}
int root(int n, int m){
    int low = 1, high = m;
    while(low <= high){
        int mid = low + (high - low)/2;
        int midN = func(mid, n, m);
        if(midN == 1) return mid;
        else if(midN == 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main(){
    int n, m;
    cin>>n>>m;
    cout<<"The "<<n<<"th root of "<<m<<" is "<<root(n, m);
}