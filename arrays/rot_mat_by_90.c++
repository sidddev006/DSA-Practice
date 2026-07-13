//Rotate a matrix by 90 degrees
#include <bits/stdc++.h>
using namespace std;

void rotmat(vector<vector<int>>& matrix){
    int n = matrix.size();
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main(){
    int n,m;
    cin>>n;
    
    vector<vector<int>> arr(n, vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    rotmat(arr);
    cout<<"The matrix rotated by 90 is : "<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}