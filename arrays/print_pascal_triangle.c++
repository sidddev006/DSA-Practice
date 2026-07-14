//To print pascal's triangle for a given row and column
#include <bits/stdc++.h>
using namespace std;

vector<int> generate_row(int row){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int i = 0;i<row;i++){
        ans *= (row - i);
        ans/= i;
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>>pT(int N){
    vector<vector<int>> ans;
    for(int i =  0;i<N;i++){
        ans.push_back(generate_row(i+1));
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> pT = pT(n);
    cout<<"The pascal triangle for "<<n<<" is: "<<endl;
    for(int i = 0;i<pT.size();i++){
        for(int j = 0;j<pT[0].size();j++){
            cout<<pT[i][j]<<" ";
        }
        cout<<endl;
    }
}