#include <bits/stdc++.h>
#define ll long long

using namespace std;

int bool(int a, int b){
    if(a != 0 && b == 0){
        return true;
    }
    else return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    stable_sort(a, a+n, cmp);
    for(int x : a) cout << x << " ";
    return 0;
}

// Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là hãy sắp đặt lại các phần tử của mảng sao cho các số 0 để ở cuối cùng, các phần tử khác 0 được bảo toàn thứ tự trước sau. Ví dụ với mảng A[] = {1, 2, 0, 0, 0, 3, 6} ta có kết quả A[] = {1, 2, 3, 6, 0, 0, 0}.

// Input Format

// Dòng đầu tiên đưa vào n là số phần tử của mảng A[]; Dòng kế tiếp đưa vào n số A[i] của mảng; Các số được viết cách nhau một vài khoảng trống.

// Constraints

// 1≤ N ≤10^5; 1≤ A[i] ≤10^5.

// Output Format

// In ra kết quả trên một dòng

// Sample Input 0

// 7
// 1 2 0 0 0 3 6
// Sample Output 0

// 1 2 3 6 0 0 0