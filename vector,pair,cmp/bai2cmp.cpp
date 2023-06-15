#include <bits/stdc++.h>
#define ll long long

using namespace std;


int cmp1(int a, int b){
    if(abs(a - x) != abs(a -x)){
        return abs(a - x) < abs(b - x);
    }
    else return a < b;
}

int cmp2(int a, int b){
    int r1 = a % 2, r2 = b % 2;
    if(r1 == 0 && r2 == 0) return a < b;
    if(r1 == 1 && r2 == 0) return a > b;
    if(r1 ==  && r2 == 1) return 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a+n, cmp1);
    for(int x : a) cout << x << " ";
    cout << endl;
    sort(b, b+n, cmp2);
    for(int x : b) cout << x << " ";

    return 0;
}