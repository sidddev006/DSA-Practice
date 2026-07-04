#include <bits/stdc++.h>
using namespace std;

void print3(int n){
    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            
            cout<<j + 1<<" ";
            
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print3(n);
}