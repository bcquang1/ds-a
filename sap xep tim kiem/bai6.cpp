#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n-1; i++){
        int min_val = a[i], pos = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < min_val){
                min_val = a[j];
                pos = j;
            }
        }
        swap(a[i], a[pos]);
        cout << "Buoc " << i + 1 << ": ";
        for(int j = 0; j < n; j++) cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}