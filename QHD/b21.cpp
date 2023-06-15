 
#include <bits/stdc++.h>
using namespace std;
#define int long long
using ll = long long;
using ii = pair <int, int>;
#define MAX 1005
#define INF 0x3f3f3f
const int MOD = 1e9 + 7;

//b21
bool f[102][10002];
int n;
int a[MAX];
// f(j) : 1 la co the tao ra tong j tu cac mang con cua A, 0 thi 

signed main() {
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int sum = accumulate(a + 1, a + 1 + n, 0);

    // O(n * Sum);
    memset(f, 0, sizeof f);
    
    for (int i = 1; i <= n; i++) {
        f[i][a[i]] = 1; // lay a(i)
        f[i][0] = 1;

        for (int j = 1; j <= sum; j++) {
            if (f[i - 1][j])
                f[i][j] = f[i][j + a[i]] = 1;
        }
    }
    
    for (int j = 0; j <= sum; j++)
        if (f[n][j])
            cout << j << " ";
    cout << "\n";

    return 0;
}