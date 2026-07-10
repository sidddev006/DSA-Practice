//To find the right time to buy and sell stocks
#include <bits/stdc++.h>
using namespace std;

int maxprofit(vector<int>& stocks){
    int n = stocks.size();
    int mini = stocks[0];
    int profit = 0;
    int cost;
    for(int i = 1;i<n;i++){
        cost = stocks[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, stocks[i]);
    }
    return profit;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<"The max profit will be: "<<maxprofit(arr);
}