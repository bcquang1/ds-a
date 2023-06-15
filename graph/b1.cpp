#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a[1001][1001];
int n, m;
vector<int> ke[1000]; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        cout << i << " : ";
        
    }
    return 0;
}