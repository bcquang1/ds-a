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

int a[MAX], b[MAX];
int n, m, k;
void run_case() {  
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];

    // dung cach trau : O((n + m) * log(n + m));
    // 2 con tro: O(n + m);
    vector <int> c;
    int i = 1, j = 1;
    while (i <= n && j <= m) {
        if (a[i] < b[j])
            c.push_back(a[i++]);
        else
            c.push_back(b[j++]);
    }
    // j == m, i < n
    while (i <= n) c.push_back(a[i++]);
    while (j <= m) c.push_back(b[j++]);
    // for (auto x : c) cout << x << " ";
    cout << c[k - 1] << "\n";
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int Test = 1;
    for (int test = 1; test <= Test; test++){

        run_case();
    }
}

// Cho hai mảng đã được sắp xếp A[], B[] gồm N, M phần tử theo thứ tự và số K. Nhiệm vụ của bạn là tìm phần tử ở vị trí số K sau khi trộn hai mảng để nhận được một mảng được sắp xếp.

// Input Format

// Dòng đầu tiên chứa 3 số N, M, K; Dòng thứ 2 chứa N số nguyên của mảng A[]; Dòng thứ 3 chứa M số nguyên của mảng B[];

// Constraints

// 1<=N,M<=10^4; 1<=K<=N+M; 1<=A[i],B[i]<=10^6

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 7 9 14
// 4 6 7 9 10 10 10 
// 1 1 2 5 7 8 8 9 10 
// Sample Output 0

// 10