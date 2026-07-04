#include <bits/stdc++.h>
using namespace std;

void print8(int n){
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<=i;j++){
            if((i+j) %2 != 0)
                cout<<"0 ";
            else
                cout<<"1 ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print8(n);
}