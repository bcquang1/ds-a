 
#include <bits/stdc++.h>
using namespace std;
#define int long long
using ll = long long;
using ii = pair <int, int>;
#define MAX 105
const int INF = 1e9 + 9;
const int MOD = 1e9 + 7;

//b25
int f[MAX][MAX];
signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    // O(n * m);
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();

    // set cac gt ve INF
    memset(f, 0x3f3f3f, sizeof f);
    f[0][0] = 0;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i > 0)
                f[i][j] = min(f[i][j], 1 + f[i - 1][j]);
                // Del
            if (j > 0)
                f[i][j] = min(f[i][j], 1 + f[i][j - 1]);
                // Insert
            if (i > 0 && j > 0) {
                int need = (s[i - 1] != t[j - 1]);
                f[i][j] = min(f[i][j], need + f[i - 1][j - 1]);
                // Replace va Skip
            }
        }
    }
    cout << f[n][m] << "\n";

    return 0;
}