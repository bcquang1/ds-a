#include "bits/stdc++.h"
using namespace std;

const int MAX = 1e6 + 5;

bool prime[MAX];


bool isPrime (int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)
			return 0;
	}
	return (x >= 2);
}

bool check (int x) {
	int sum = 0;
	while (x) {
		int d = x % 10;
		x /= 10;

		if (d != 2 && d != 3 && d != 5 && d != 7)
			return 0;
		sum += d;
	}
	return (isPrime(sum));
}


void solve () {
	int a, b;
	cin >> a >> b;
	int res = 0;
	for (int i = a; i <= b; i++) {
		res += (check(i) && isPrime(i));
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
// Một số được coi là thuần nguyên tố nếu nó là số nguyên tố, tất cả các chữ số là nguyên tố và tổng chữ số của nó cũng là một số nguyên tố. Bài toán đặt ra là đếm xem trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số thuần nguyên tố.

// Input Format

// Một dòng hai số nguyên dương tương ứng, cách nhau một khoảng trống.

// Constraints

// Các số đều không vượt quá 9 chữ số.

// Output Format

// Viết ra số lượng các số thuần nguyên tố tương ứng

// Sample Input 0

// 2345 6789
// Sample Output 0

// 15
