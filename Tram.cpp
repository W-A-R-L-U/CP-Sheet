// problem : https://codeforces.com/problemset/problem/116/A
// submission : https://codeforces.com/contest/116/submission/380609622

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0,count=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        count-=a;
        count+=b;
        ans=max(ans,count);
    }
    cout<<ans<<"\n";
    return 0;
}