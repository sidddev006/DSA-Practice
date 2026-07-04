#include <bits/stdc++.h>
using namespace std;
int summation(int n, int sum){
    if(n < 1) return sum;
    return summation(n - 1, sum + n);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of "<<n<<" numbers is "<< summation(n,0)<<endl;
    return 0;
}