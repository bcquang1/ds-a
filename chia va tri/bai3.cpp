#include "bits/stdc++.h"
// @Jasper
using namespace std;
using ll = long long;
using pii = pair < int, int >;
//B3
// #define int long long
const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 2e3 + 5;

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

void run_case() {  
    ll x; cin >> x;
    cout << power(2, x - 1) << "\n";
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int Test = 1;
    for (int test = 1; test <= Test; test++){

        run_case();
    }
}

// Cho số nguyên dương n, bạn được phép sử dụng không giới hạn các số tự nhiên từ 1 tới n. Hỏi có bao nhiêu cách chọn ra 1 dãy có tổng các phần tử bằng n.

// Input Format

// Dòng duy nhất chứa số nguyên dương n

// Constraints

// 1<=n<=10^12

// Output Format

// In ra đáp án của bài toán sau khi chia dư với 10^9 + 7

// Sample Input 0

// 6
// Sample Output 0

// 32