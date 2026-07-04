#include <bits/stdc++.h>
using namespace std;

void print5(int n){
    int c = 0;/*
    for(int i = n; i >=0; i--){
        for(int j = 0; j <= i; j++){            
            cout<<"* ";            
        }
        cout<<endl;
    }*/
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print5(n);
}