// problem : https://codeforces.com/problemset/problem/546/A
// submission : https://codeforces.com/contest/546/submission/381049124

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    cout<<max(0,k*w*(w+1)/2-n)<<"\n";
    return 0;
}