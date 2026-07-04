#include <bits/stdc++.h>
using namespace std;
int N;
void print(int i, int n){
    if(i < 1) return;
    cout<<i<<endl;
    print(i-1, n);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n, n);
    return 0;
}