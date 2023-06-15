#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, x[100], cnt = 0;
bool cot[100], cheo1[100], cheo2[100];

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] == 0 && cheo1[i - j + n] == 0 && cheo2[i + j - 1] == 0){
            x[i] = j;
            cot[j] = 1;
            cheo1[i - j + n] = 1;
            cheo2[i + j - 1] = 1;
            if(i == n){
                cnt++;
            }
            else{
                Try(i + 1);
            }
            cot[j] = 0;
            cheo1[i - j + n] = 0;
            cheo2[i + j - 1] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    Try(1);
    cout << cnt;
    return 0;
}

// Cho một bàn cờ vua có kích thước n * n. Vấn đề đặt ra rằng, có n quân hậu, bạn cần đếm số cách đặt n quân hậu này lên bàn cờ sao cho với 2 quân hậu bất kì, chúng không “ăn” nhau.

// Input Format

// Dòng duy nhất chứa n là kích thước của bàn cờ.

// Constraints

// 1<=N<=12

// Output Format

// In ra số cách xếp hậu hợp lệ

// Sample Input 0

// 8
// Sample Output 0

// 92