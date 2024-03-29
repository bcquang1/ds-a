#include <bits/stdc++.h>
using namespace std;
// #define int long long
using ll = long long;
using ii = pair <int, int>;
#define MAX 1005
#define INF 0x3f3f3f

// B1
int f[MAX][MAX];
string s, t;
int solve(int n, int m) {
    if (n == -1 || m == -1)
        return 0;

    if (f[n][m] != -1)
        return f[n][m];

    int ans = 0;
    if (s[n] == t[m])
        ans = 1 + solve(n - 1, m - 1);
    else
        ans = max(solve(n - 1, m), solve(n, m - 1));
    
    return f[n][m] = ans;       
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    cin >> s >> t;
    int n = s.size();
    int m = t.size();

    memset(f, -1, sizeof f);
    cout << solve(n - 1, m - 1) << "\n";

    return 0;
}

//  Cho 2 xâu kí tự S và T, hãy tìm xâu con chung dài nhất của S và T. Các kí tự của xâu con không nhất thiết phải liền kề nhau.

// Input Format

// Dòng đầu tiên là xâu S; Dòng thứ 2 là xâu T;

// Constraints

// S và T chỉ gồm các chữ cái in hoa và có độ dài không quá 1000

// Output Format

// In ra độ dài xâu con chung dài nhất của S và T

// Sample Input 0

// ZHFTDFHF
// TFISHROV
// Sample Output 0

// 3