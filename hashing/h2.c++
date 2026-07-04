//to calculate the occurence of all the characters
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    //precompute
    int hash[256] = {0};
    for(int i = 0;i < s.size(); i++){
        hash[s[i]] += 1;
    }
    int q;
    cout<<"How many times you want to search in the array? ";
    cin>>q;
    while(q--){
        char c;
        cout<<"Enter the character you want to search for ";
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;
    }
}