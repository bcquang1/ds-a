 
#include <bits/stdc++.h>
using namespace std;
// #define int long long
using ll = long long;
using ii = pair <int, int>;
#define MAX 1005
#define INF 0x3f3f3f


int n, C;
//B8
int f[25005];
int w[MAX], v[MAX];

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n >> C;
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    f[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = C; j >= 1; j--) {
            if (j >= w[i])
                f[j] = max(f[j], f[j - w[i]] + v[i]);
        }
    }
    cout << f[C] << "\n";

    return 0;
}

// Một tên trộm có 1 cái túi có thể mang các đố vật với trọng lượng tối đa là V. Hiện tại tên trộm muốn lựa chọn các đồ vật trong N đồ vật để ăn trộm, mỗi đồ vật có trọng lượng là w[i] và giá trị là v[i]. Hãy xác định tổng giá trị lớn nhất của các đồ vật mà tên trộm này lựa chọn sao cho trọng lượng của chúng không vượt quá V.

// Input Format

// Dòng đầu ghi 2 số N và V. Dòng tiếp theo ghi N số của mảng w. Sau đó là một dòng ghi N số của mảng v.

// Constraints

// V<=1000; N≤1000; 1<=w[i], c[i]<=500;

// Output Format

// In ra giá trị lớn nhất có thể đạt được.

// Sample Input 0

// 6 22
// 39 44 4 59 91 70 
// 47 26 92 33 6 69 
// Sample Output 0

// 92
// Sample Input 1

// 7 22
// 10 3 22 50 83 16 41 
// 99 97 54 19 50 70 48 
// Sample Output 1

// 196