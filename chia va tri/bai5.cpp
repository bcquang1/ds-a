#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll F[100];

void init(){
    F[1] = 1;
    F[2] = 1;
    for(int i = 3; i <= 92; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}

char fibo(int n, ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n - 2]){
        return fibo(n - 2, k);
    }
    else{
        return fibo(n - 1, k - F[n - 2]);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    init();
    ll n, k; cin >> n >> k;
    cout << fibo(n, k) << endl;
}

// Xâu S chỉ bao gồm các kí tự A và B được gọi là xâu Fibonacci nếu S(1) = 'A', S(2) = 'B', S(n) = S(n - 2) + S(n - 1), trong đó phép + là phép nối 2 xâu. Bài toán đặt ra là tìm kí tự thứ K trong xâu fibonacci thứ N.

// Input Format

// Dòng duy nhất chứa 2 số N và K

// Constraints

// 1<=N<=92; 1<=K<=7e18 và đảm bảo là vị trí hợp lệ trong xâu fibonacci thứ N

// Output Format

// In ra kí tự tìm được

// Sample Input 0

// 5 3
// Sample Output 0

// B