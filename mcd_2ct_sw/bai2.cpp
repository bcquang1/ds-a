#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    int a[n];
    ll f[n];
    for(int &x : a) cin >> x;
    while(q--){
        int l, r; cin >> l >> r;
        for(int i = l; i < r - 1; i++){
            if(l == 0) cout << f[r] << endl;
            else cout << f[r] - f[l-1] << endl;
        }
    }
    return 0;
}