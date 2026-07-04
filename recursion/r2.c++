#include <bits/stdc++.h>
using namespace std;
/*int n = 0;
void print(string name){
    if(n > 5) return;
    cout<<name<<endl;
    n++;
    print(name); 
}
int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    print(name);
    cout<<"Name is "<< n;
    return 0;
} ALTERNATE :-- */
void print(int i, int n, string name){
    if(i > n) return;
    cout<<name<<endl;
    print(i+1, n, name);
}
int main(){
    string name;
    int n;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter a number: ";
    cin>>n;
    print(1, n, name);
    return 0;
}