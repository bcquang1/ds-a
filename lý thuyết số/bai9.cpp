#include "bits/stdc++.h"
using namespace std;

const int MAX = 1e6 + 5;

bool isPrime (int x) {
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0)
			return 0;
	return (x >= 2);
}

void solve () {

	int n;
	cin >> n;
	int res = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (isPrime(i)) {
			res++;
		}
	}	
	cout << res << "\n";
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
