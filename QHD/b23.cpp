 
#include <bits/stdc++.h>
using namespace std;
#define int long long
using ll = long long;
using ii = pair <int, int>;
#define MAX 1005
#define INF 0x3f3f3f
const int MOD = 1e9 + 7;

//b23
bool f[MAX][MAX];
string s;

signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    cin >> s;
    int n = s.size(); 
    memset(f, 0, sizeof f);
    int ans = 1;

    for (int i = 0; i < n; i++)
        f[i][i] = 1;
    
    for (int len = 2; len <= n; len++) {
        for (int l = 0; l < n - len; l++) {
            int r = l + len - 1;
            if (s[l] != s[r])
                f[l][r] = 0;
            if (s[l] == s[r] && len == 2)
                f[l][r] = 1;
            else
                f[l][r] = (f[l + 1][r - 1] && (s[l] == s[r]));
            if (f[l][r])
                ans = max(ans, r - l + 1);
        }
    }
    cout << ans << "\n";

    return 0;
}