#include "bits/stdc++.h"
// @Jasper
using namespace std;
using ll = long long;
using pii = pair < int, int >;

// #define int long long
const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 2e3 + 5;


int power(int a, int b) {
    ll ans = 1;
    while (b) {
        if (b & 1)
            ans = (1ll * ans * a) % MOD;
        a = (1ll * a * a) % MOD;
        b >>= 1;
    }
    return (int) ans;
}

void run_case() {  
    int x; cin >> x;
    string y = to_string(x);
    reverse(y.begin(), y.end());
    int nx = stoi(y);
    cout << power(x, nx) << "\n";
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int Test = 1;
    for (int test = 1; test <= Test; test++){

        run_case();
    }
}

// Cho số nguyên dương N, gọi M là số đảo của N. Hãy tính lũy thừa với cơ số N và số mũ M và chia dư kết quả cho 10^9 + 7

// Input Format

// Dòng duy nhất chứa số nguyên dương N

// Constraints

// 1<=N<=10^9

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 8
// Sample Output 0

// 16777216
// Sample Input 1

// 999995841
// Sample Output 1

// 987348397