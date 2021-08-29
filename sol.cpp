#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, d;
	cin >> n >> d;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> res;
	// elements starting from the ('d' mod 'n')-th position 
	// up to the last position will be rotated to the starting position
	for (int i = d % n; i < n; i++) {
		res.push_back(a[i]);
	}
	// elements starting from the 0 up to the ('d' mod 'n') - 1-th position 
	// will have their positions switched with the elements above
	for (int i = 0; i < d % n; i++) {
		res.push_back(a[i]);
	}
	for (auto x : res) {
		cout << x << " ";
	}
	cout << '\n';
	return 0;
}
