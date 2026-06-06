// problem : https://codeforces.com/problemset/problem/263/A
// submission : https://codeforces.com/contest/263/submission/377523219
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    vector<vector<int>> mat(n,vector<int>(n));
    int r=2,c=2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){
                r=i;
                c=j;
            }
        }
    }
    cout<<abs(r-2)+abs(c-2)<<"\n";
    return 0;
}