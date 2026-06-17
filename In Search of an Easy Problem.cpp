// problem : https://codeforces.com/problemset/problem/1030/A
// submission : https://codeforces.com/contest/1030/submission/379270813

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool f=false;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(val==1) f=true;
    }
    if(f) cout<<"HARD\n";
    else cout<<"EASY\n";
}