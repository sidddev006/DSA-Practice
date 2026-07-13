// To set matrix zeros
#include <bits/stdc++.h>
using namespace std;

void matzero(vector<int> matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    int row[n] = 0;
    int col[m] = 0;
    for(int i = 0;i<n;i++){
        for(int j= 0;j<m;j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(row[i]==1||col[j]==1)
                matrix[i][j] = 0;
        }
    }
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<vector<int>> arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    matzero(arr);
    cout<<"The matrix zeros are: ";
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}