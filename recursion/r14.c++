// printing 1 to n using recursion
#include <bits/stdc++.h>
using namespace std;
void print_num(int i, int n){
    if (i > n)
        return;
    cout<<i<<endl;
    print_num(++i, n);
}
int main(){
    int n = 5;
    print_num(1,n);
    return 0;
}