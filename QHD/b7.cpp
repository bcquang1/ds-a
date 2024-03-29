 
#include <bits/stdc++.h>
using namespace std;
// #define int long long
using ll = long long;
using ii = pair <int, int>;
#define MAX 1005
#define INF 0x3f3f3f


int n, C;
//B7
int f[25005];
int a[MAX];
// ket qua toi uu tai vi tri thu i voi khoi luong cai tui la j
// f(n,S):
//O(n * S);
// f(S):
//O(S);
// O(n * S);

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    cin >> C >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    f[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = C; j >= 1; j--) {
            if (j >= a[i])
                f[j] = max(f[j], f[j - a[i]] + a[i]);
        }
    }
    cout << f[C] << "\n";

    return 0;
}

// John có một đàn bò. Một ngày đẹp trời, anh ta quyết định mua xe tải với khả năng chở được C kg (1000 ≤ C ≤ 25000) để đưa những con bò đi xem phim. Cho số con bò là N (20 ≤ N ≤ 100) và khối lượng w[i] của từng con (đều nhỏ hơn C), hãy cho biết khối lượng bò lớn nhất mà John có thể đưa đi xem phim là bao nhiêu.

// Input Format

// Dòng 1: 2 số nguyên C và N cách nhau bởi dấu cách; Dòng 2: Ghi lần lượt các số nguyên: w[i]

// Constraints

// 1000 ≤ C ≤ 25000; 20 ≤ N ≤ 100; w[i] <= C;

// Output Format

// Một số nguyên là tổng khối lượng bò lớn nhất mà John có thể mang đi xem phim.

// Sample Input 0

// 259 5
// 81 58 42 33 61
// Sample Output 0

// 242