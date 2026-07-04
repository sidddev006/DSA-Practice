#include <bits/stdc++.h>
using namespace std;
int n = 1;
void print(int i, int N){
    if(i > N) return;
    cout<<i<<endl;
    print(i+1, N);
}
int main(){
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    print(1, N);
    return 0;
}