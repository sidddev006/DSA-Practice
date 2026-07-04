// print name n times
#include <bits/stdc++.h>
using namespace std;
int i = 0;
void print_name(int n, string name){
    if (i == n)
        return;
    cout<<name<<endl;
    i++;
    print_name(n, name);
}
int main(){
    int n = 5; string name = "Sidd";
    print_name(5,name);
    return 0;
}