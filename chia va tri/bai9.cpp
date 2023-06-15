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
// b9

int a[MAX], b[MAX];
int n;
void run_case() {  
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) cin >> b[i];

    int i = 1, j = 1;
    while (i <= n && j < n) {
        if (a[i] == b[j]) {
            i++;
            j++;
        }
        else {
            cout << i << " ";
            return;
        }
    }
    cout << n << "\n";
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int Test = 1;
    for (int test = 1; test <= Test; test++){

        run_case();
    }
}

// Cho hai mảng đã được sắp xếp A[] và B[] gồm N và N-1 phần tử. Các phần tử của mảng A[] chỉ khác mảng B[] một phần tử duy nhất. Hãy tìm vị trí của phần tử khác nhau giữa A[] và B[].

// Input Format

// Dòng đầu chứa số nguyên dương N; Dòng thứ 2 chứa các phần tử của mảng A[]; Dòng thứ 3 chứa các phần tử của mảng B[];

// Constraints

// 1<=N<=10^5; 1<=A[i], B[i]<=10^6;

// Output Format

// In ra đáp án của bài toán

// Sample Input 0

// 8
// 1 2 3 4 5 6 7 8 
// 1 2 3 4 5 6 8 
// Sample Output 0

// 7