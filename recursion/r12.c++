// Recursive code to generate the term of nth fibonacci series
#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<=1) return n;
    return fibo(n-2) + fibo(n - 1);
}
int main() {
    int n = 5;
    cout<<fibo(n);
}