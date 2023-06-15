#include "bits/stdc++.h"
// @Jasper
using namespace std;
using ll = long long;
using pii = pair < int, int >;

// #define int long long
const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
// b10

int a[MAX];
int n;
void run_case() {  
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    // upperbound(, x) a(i) > x;
    // lowerbound(, x) a[i] >= x;

    auto iter = upper_bound(a + 1, a + 1 + n, 0);
    --iter;
    int cnt = (int) (iter - a);
    cout << cnt << "\n";
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int Test = 1;
    for (int test = 1; test <= Test; test++){

        run_case();
    }
}

// Cho mảng A[] gồm N phần tử chỉ bao gồm các số 0 và 1. Các số 0 được đặt trước các số 1. Hãy đếm các số 0 với thời gian log(N).

// Input Format

// Dòng 1 chứa số nguyên dương N; Dòng thứ 2 chứa N số nguyên của mảng A[]

// Constraints

// 1<=N<=10^6; 0<=A[i]<=1;

// Output Format

// In ra đáp án của bài toán, nếu số 0 không xuất hiện in ra 0

// Sample Input 0

// 6
// 0 0 1 1 1 1 
// Sample Output 0

// 2