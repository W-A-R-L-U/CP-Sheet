// problem : https://codeforces.com/problemset/problem/282/A
// submission : https://codeforces.com/contest/282/submission/376401977

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        s[1]=='+'?ans++:ans--;
    }
    cout<<ans<<"\n";
    return 0;
}
