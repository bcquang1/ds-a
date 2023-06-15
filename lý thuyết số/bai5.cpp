#include "bits/stdc++.h"
using namespace std;

const int MAX = 1e6 + 5;

bool prime[MAX];
void prepare () {
	for (int i = 0; i < MAX; i++)
		prime[i] = 1;

	prime[0] = prime[1] = 0;
	for (int i = 2; i * i < MAX; i++) 
		if (prime[i])
			for (int j = i * i; j < MAX; j += i)
				prime[j] = 0;

}

void solve () {
	int n;
	cin >> n;

	for (int i = 2; i <= n / 2; i++) {
		if (prime[i] && prime[n - i]) {
			cout << i << " " << n - i << "\n";
		}
	}
}

signed main(){

	cin.tie(0) -> sync_with_stdio(0);

	prepare();

	
	int t; cin >> t;
	while (t--) {
		solve();
	}
}

// Theo Goldbach conjecture, một số nguyên dương chẵn >=4 đều có thể biểu diễn dưới dạng tổng của 2 số nguyên tố. Cho số nguyên dương chẵn N >=4 . Hãy liệt kê các cặp số nguyên tố p, q có tổng đúng bằng N. Ví dụ N = 6 ta có 1 cặp số nguyên tố là 3 + 3 = 6.

// Input Format

// Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số chẵn N.

// Constraints

// 1≤T≤1000; 4≤N≤1000000

// Output Format

// Đưa ra kết quả mỗi test theo từng dòng, mỗi dòng là một cặp số thỏa mãn. Chú ý mỗi cặp chỉ liệt kê một lần, không xét đến thứ tự.

// Sample Input 0

// 1
// 10
// Sample Output 0

// 3 7
// 5 5