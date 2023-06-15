 
#include <bits/stdc++.h>
using namespace std;
#define int long long
using ll = long long;
using ii = pair <int, int>;
#define MAX 1005
#define INF 0x3f3f3f
const int MOD = 1e9 + 7;

//b22

ll f[15];
signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    string N;
    cin >> N;
    int n = N.size();
    N = '$' + N;
    for (int i = 1; i <= n; i++) {
        int d = N[i] - '0';
        f[i] = f[i - 1] * 10 + d * i;
    }
    //O(n)
    ll ans = accumulate(f + 1, f + n + 1, 0ll);
    cout << ans << "\n";

    return 0;
}