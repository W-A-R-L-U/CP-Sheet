// problem : https://codeforces.com/problemset/problem/723/A
// submission : https://codeforces.com/contest/723/submission/377648633

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1,x2,x3;
	cin>>x1>>x2>>x3;
	cout<<min({abs(x1-x2)+abs(x1-x3),abs(x2-x1)+abs(x2-x3),abs(x3-x1)+abs(x3-x2)})<<"\n";
}