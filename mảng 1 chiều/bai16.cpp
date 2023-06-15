#include <bits/stdc++.h>
#define ll long long

using namespace std;

int nto(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 2;
}

int tn(int n){
    int s = 0, tmp = n;
    while(n){
        s = s * 10 + n % 10;
        n /= 10;
    }
    return s == tmp;
}

int cp(int n){
    int can = sqrt(n);
    if(can * can == n) return 1;
    else return 0;
}

int tcs_nto(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return nto(sum);
}

int main(){
    int n; cin >> n;
    int a[n];
    int d1 = 0, d2 = 0, d3 = 0, d4 = 0;
    for(int &x : a) {
        cin >> x;
        if(nto(x)) d1++;
        if(tn(x)) d2++;
        if(cp(x)) d3++;
        if(tcs_nto(x)) d4++;
    }
    cout << d1 << endl << d2 << endl << d3 << endl << d4;
    return 0;
}