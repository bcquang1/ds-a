#include <bits/stdc++.h>
#define ll long long

using namespace std;


int tien[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int i = 0, cnt = 0;
    while(n != 0){
        cnt += n/tien[i];
        n = n % tien[i];
        i++;
    }
    cout << cnt;
    return 0;
}

// Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000. Tổng số tiền cần đổi có giá trị bằng N. Hãy xác định xem có ít nhất bao nhiêu tờ tiền sau khi đổi tiền?

// Input Format

// Dòng duy nhất chứa số nguyên N

// Constraints

// 1<=N<=10^9

// Output Format

// In ra số tờ tiền tối thiểu

// Sample Input 0

// 138
// Sample Output 0

// 6