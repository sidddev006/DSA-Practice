#include <bits/stdc++.h>
using namespace std;

void print10(int n){
    char start = 'A' + n;
    for(int i = 0; i <n; i++){
        for(char ch = 'E' -i;ch <= 'E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print10(n);
}