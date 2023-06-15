#include "bits/stdc++.h"
using namespace std;
using ll = long long;
// B16
void solve(ll x, ll y) {
    if (y == 0 || x == 0) {
        return;
    }
    if (y % x == 0) {
        cout << "1/" << (y / x);
        return;
    }
    if (x % y == 0) {
        cout << x / y;
        return;
    }
    if (x > y) {
        ll j = x / y;
        if (j == 1)
            cout << "1/";
        cout << j << " + ";
        solve(x % y, y);
    }
    else {
        int j = y / x + 1;
        cout << "1/" << j << " + ";
        solve(x * j - y, y * j);
    }
}

void run_case() {
    ll a, b;
    cin >> a >> b;
    solve(a, b);
}

signed main() {
    int Test = 1;
    //cin >> Test;
    for (int test = 1; test <= Test; test++){

        run_case();
    }
}

// Một phân số đơn vị nếu tử số của phân số đó là 1. Mọi phân số nguyên dương đều có thể biểu diễn thành tổng các phân số đơn vị. Ví dụ 2/3 = 1/2 + 1/6. Cho phân số nguyên dương P/Q bất kỳ , hãy biểu diễn phân số nguyên dương thành tổng phân số đơn vị với số hạng tử là ít nhất.

// Input Format

// 1 dòng duy nhất chứa 2 số P, Q

// Constraints

// 1<=P,Q<=200

// Output Format

// Đưa ra đáp án trên 1 dòng

// Sample Input 0

// 9 6
// Sample Output 0

// 1/1 + 1/2
// Sample Input 1

// 5 6
// Sample Output 1

// 1/2 + 1/3