// problem : https://codeforces.com/problemset/problem/136/A
// submission : https://codeforces.com/contest/136/submission/380027082

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]=i+1;
    }
    for(int i=1;i<=n;i++){
        cout<<mp[i]<<" ";
    }
    cout<<"\n";
    return 0;
}