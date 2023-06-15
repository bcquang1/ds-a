#include <bits/stdc++.h>
#define ll long long

using namespace std;

int dem_chan(int n){
    int cnt = 0;
    while(n){
        int d = n % 10;
        if(d % 2 == 0) cnt++;
        n /= 10;
    }
    return cnt;
}

int dem_le(int n){
    int cnt = 0;
    while(n){
        int d = n % 10;
        if(d % 2 == 1) cnt++;
        n /= 10;
    }
    return cnt;
}

bool cmp1(int a, int b){
    if(dem_chan(a) != dem_chan(b)) return dem_chan(a) < dem_chan(b);
    else return a < b;
}

bool cmp2(int a, int b){
    return dem_le(a) < dem_le(b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a+n, cmp1);
    for(int x : a) cout << x << " ";
    cout << endl;
    stable_sort(b, b+n, cmp2);
    for(int x : b) cout << x << " ";
    return 0;
}