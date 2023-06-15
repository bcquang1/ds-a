#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n);
    ll sum = 0, mod = 1e9 + 7;
    for(int i = 0; i < n; i++){
        sum += 1ll * a[i] * i;
        sum %= mod;
    }
    cout << sum;
    return 0;
}

