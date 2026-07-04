#include <bits/stdc++.h>
using namespace std;
int c = 0;
void print(){
    if(c <= 4)
    cout<< c<<endl;
    c++;
    print();        
}
int main(){
    print();
    return 0;
}