#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using pii = pair < int, int >;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;


int power(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1)
            ans = (1ll * ans * a) % MOD;
        a = (1ll * a * a) % MOD;
        b >>= 1;
    }
    return (int) ans;
}

int a[MAX];

void run_case() {  
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    ll f = 0, g = 0;
    for (int i = 1; i <= n; i++) {
        g = max(0ll, g + 1ll * a[i]);
        f = max(f, g);
    }
    cout << f << "\n";
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int Test = 1;
    for (int test = 1; test <= Test; test++){

        run_case();
    }
}

// Cho dãy số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là tính tổng của dãy con có tổng lớn nhất.

// Input Format

// Dòng đầu tiên chứa số nguyên dương N; Dòng thứ 2 chứa N số nguyên của dãy A[]

// Constraints

// 1<=N<=10^5; 1<=abs(A[i])<=10^6

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 5
// -3 6 1 -3 6 
// Sample Output 0

// 10