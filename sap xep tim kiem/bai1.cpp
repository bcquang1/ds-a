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
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1]) cnt++;
    }
    cout << cnt;
    return 0;
}