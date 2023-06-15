#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    //Max heap <> Min heap
    priority_queue<ll, vector<ll>, greater<ll> > Q;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        Q.push(x);
    }
    ll ans = 0;
    while(Q.size() > 1){
        ll n1 = Q.top(); Q.pop();
        ll n2 = Q.top(); Q.pop();
        ans += n1 + n2;
        Q.push(n1 + n2);
    }
    cout << ans << endl;
}

// Cho N sợi dây, biết chi phí nối 2 sợ dây là tổng độ dài của 2 sợi dây đó. Nhiệm vụ của bạn là nối N sợi dây này thành 1 sao cho chi phí nối dây là nhỏ nhất

// Input Format

// Dòng 1 chứa số nguyên N; Dòng 2 chứa N số nguyên là độ dài các sợ dây

// Constraints

// 1<=N<=10^5; Các sợi dây có độ dài không quá 10^5;

// Output Format

// In ra chi phí nối dây tối thiểu

// Sample Input 0

// 7
// 7 7 6 10 4 8 3 
// Sample Output 0

// 124
// Sample Input 1

// 4
// 4 3 2 6
// Sample Output 1

// 29