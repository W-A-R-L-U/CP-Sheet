// problem : https://codeforces.com/problemset/problem/144/A
// submission : https://codeforces.com/contest/144/submission/379157742

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;cin>>a[i++]);
	int in1=0,in2=0;
	for(int i=0;i<n;i++){
	    if(a[i]>a[in1]) in1=i;
	    if(a[i]<=a[in2]) in2=i;
	}
	if(in1<in2) cout<<in1+n-1-in2<<"\n";
	else cout<<in1+n-in2-2<<"\n";
}