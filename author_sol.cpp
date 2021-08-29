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
	// create a temporary d-element array to store elements shifted to the left of index 0:
	vector<int> temp;
	for (int i = 0; i < d; i++) {
		temp.push_back(a[i]);
	}
	// shift elements from indices d through n to indices 0 through d - 1:
	for (int i = d; i < n; i++) {
		a[i - d] = a[i];
	}
	// copy the d shifted elements from the temporary array back to the original array:
	for (int i = n - d; i < n; i++) {
		a[i] = temp[i - n + d];
	}
	for (auto x : a) {
		cout << x << " ";
	}
	cout << '\n';
	return 0;
}
