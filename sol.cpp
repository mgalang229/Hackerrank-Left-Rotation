#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, d;
	cin >> n >> d;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	vector<int> ans;
	for(int i=d%n; i<n; ++i)
		ans.push_back(a[i]);
	for(int i=0; i<d%n; ++i)
		ans.push_back(a[i]);
	for(auto x : ans)
		cout << x << " ";
	cout << "\n";
}
