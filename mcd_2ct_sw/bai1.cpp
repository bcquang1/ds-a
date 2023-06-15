#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    ll f[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        if(i == 0) f[i] = a[i];
        else{
            f[i] = f[i-1] + a[i];
        }
    cout << f[i] << " ";
    }

    return 0;
}