// problem : https://codeforces.com/problemset/problem/977/A
// submission : https://codeforces.com/contest/977/submission/380934846

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if(n%10==0) n/=10;
        else n--;
    }
    cout<<n<<"\n";
    return 0;
}