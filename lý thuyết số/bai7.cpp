#include "bits/stdc++.h"
using namespace std;

const int MAX = 1e6 + 5;

int Gcd (int x, int y) {
	return ((y == 0) ? x : Gcd(y, x % y));
}


void solve () {
	int a, b;
	cin >> a >> b;

	for (int i = a; i < b; i++) {
		for (int j = a + 1; j <= b; j++) {

			if (Gcd(i, j) == 1) {
				cout << "(";
				cout << i << "," << j << ")\n";
			}
		}
	}	
}

signed main(){

	cin.tie(0) -> sync_with_stdio(0);

	// prepare();


	int t = 1; 
	// cin >> t;
	while (t--) {
		solve();
	}
}
