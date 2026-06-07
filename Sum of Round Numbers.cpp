// problem : https://codeforces.com/problemset/problem/1352/A
// submission : https://codeforces.com/contest/1352/submission/377653134

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> ans;
	    int val=1;
	    while(n){
	        if(n%10) ans.push_back((n%10)*val);
	        n/=10;
	        val*=10;
	    }
	    cout<<ans.size()<<"\n";
	    for(int& i:ans) cout<<i<<" ";
	    cout<<"\n";
	}
}