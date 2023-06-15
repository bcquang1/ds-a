#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll powMod(ll a, ll b, ll c){
    if(b == 0) return 1;
    ll x = powMod(a, b/2, c);
    if(b % 2 == 0) return ((x%c)*(x%c)) % c;
    else return (a * powMod(a, b - 1, c)) % c;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    cout << powMod(n, k, 1e9+7) << endl;
    return 0;
}

// Nhiệm vụ của bạn là tính N^K, kết quả được chia dư với 10^9 + 7

// Input Format

// Dòng duy nhất chứa 2 số N và K

// Constraints

// 1<=N<=10^6; 1<=K<=10^9;

// Output Format

// Kết quả của bài toán

// Sample Input 0

// 9 9
// Sample Output 0

// 387420489
// Sample Input 1

// 994402 999992619
// Sample Output 1

// 925329307