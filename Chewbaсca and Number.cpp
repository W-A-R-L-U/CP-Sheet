// problem : https://codeforces.com/contest/514/problem/A
// submission : https://codeforces.com/contest/514/submission/376402976

#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++){
        int mn=min(x[i]-'0',9-(x[i]-'0'));
        if(i==0){
            if(x[i]!='9') x[i]=mn+'0';
        }else x[i]=mn+'0';
    }
    cout<<x<<"\n";
    return 0;
}
