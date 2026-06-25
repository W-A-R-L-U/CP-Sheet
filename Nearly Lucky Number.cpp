// problem : https://codeforces.com/problemset/problem/110/A
// submission : https://codeforces.com/contest/110/submission/380148505

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int count=0;
    while(n){
        if(n%10==4 || n%10==7) count++;
        n/=10;
    }
    if(count==4 || count==7) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}