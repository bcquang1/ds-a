#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int mod = 1000000007;

struct matrix{
    int n;
    ll a[20][20];
    //Nap chong phep nhan matrix
    friend matrix operator * (matrix x, matrix y){
        matrix res;
        res.n = x.n;
        //xay dung mang a cho matri res
        for(int i = 0; i < x.n; i++){
            for(int j = 0; j < x.n; j++){
                res.a[i][j] = 0;
                //xay dung a[i][j] cho res
                for(int k = 0; k < x.n; k++){
                    res.a[i][j] += x.a[i][k] * y.a[k][j];
                    res.a[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

matrix powMod(matrix A, ll n){
    if(n == 1){
        return A;
    }
    matrix X = powMod(A, n / 2);
    if(n % 2 == 0){
        return X * X;
    }
    else{
        return X * X * A;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    matrix A;
    ll k;
    cin >> A.n >> k;
    for(int i = 0; i < A.n; i++){
        for(int j = 0; j < A.n; j++){
            cin >> A.a[i][j];
        }
    }
    matrix kq = powMod(A, k);
    for(int i = 0; i < A.n; i++){
        for(int j = 0; j < A.n; j++){
            cout << kq.a[i][j] << ' ';
        }
        cout << endl;
    }
}

// Cho ma trận A[][] là ma trận vuông cỡ N x N. Hãy tính kết quả A^K và chia dư các phần tử trong ma trận kết quả cho 10^9 + 7

// Input Format

// Dòng đầu tiên chứa 2 số nguyên dương N và K; N dòng tiếp theo là các phần tử trong ma trận A

// Constraints

// 1<=N<=10; 1<=K<=10^9; 0<=A[i][j]<=1000

// Output Format

// In ra ma trận đáp án

// Sample Input 0

// 2 3
// 712 141 
// 55 619 
// Sample Output 0

// 376787593 188740908 
// 73622340 252298909 