#include <bits/stdc++.h>
using namespace std;
// #define int long long
using ll = long long;
using ii = pair <int, int>;
#define MAX 1005
#define INF 0x3f3f3f


int n;
int a[MAX];
int f[MAX]; // tang
int g[MAX]; // giam
// f(i):
// B13
int main() {
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        f[i] = a[i];
        for (int j = 1; j < i; j++) {
            if (a[i] > a[j]) {
                f[i] = max(f[i], f[j] + a[i]);
            }
        }
    }
    // i : f(1.. i) + g(i .. n);
    for (int i = n; i >= 1; i--) {
        g[i] = a[i];
        for (int j = n; j > i; j--) {
            if (a[i] > a[j]) {
                g[i] = max(g[i], g[j] + a[i]);
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, f[i] + g[i] - a[i]);
    cout << ans << "\n";

    return 0;
}

// Một dãy số được gọi là Bi-tonic nếu nó được chia thành hai dãy đầu tăng dần và dãy tiếp theo giảm dần. Nhiệm vụ của bạn là tìm tổng lớn nhất dãy con Bi-tonic của dãy số A[]. Ví dụ với dãy A[] = {1, 15, 51, 45, 33, 100, 12, 18, 9} ta có kết quả là 194 tương ứng với dãy Bi-tonic {1, 15, 51, 100, 18, 9}.

// Input Format

// Dòng đầu tiên đưa vào N là số phần tử của dãy A[]; Dòng tiếp theo đưa vào N số A[i]; các số được viết cách nhau một vài khoảng trống

// Constraints

// 1<=N<=100; 1<=A[i]<=100;

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 8
// 7 8 8 19 3 6 2 15 
// Sample Output 0

// 49

