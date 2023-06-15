 
#include <bits/stdc++.h>
using namespace std;
// #define int long long
using ll = long long;
using ii = pair <int, int>;
#define MAX 1000005
#define INF 0x3f3f3f
const int MOD = 1e9 + 7;

int n, C;
//B14
int f[MAX];

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n;
    f[0] = f[1] = 1; 

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i >= j) {
                f[i] = (f[i] + f[i - j]) % MOD;
            }
        }
    }
    cout << f[n] << "\n";

    return 0;
}


// Tèo hiện đang học sinh lớp 10A1, vốn là một học sinh được đánh giá rất cao về khả năng toán học nên Tèo thường được các bạn trong lớp nhờ giải các bài toán trên tạp chí toán học và tuổi trẻ. Hôm nay Tí là bạn thân của Tèo gặp một bài toán trên tạp chí và đã nhờ Tèo giải hộ, Tèo dù rất giỏi toán và biết cách làm bài này nhưng bài toán này kết quả quá lớn nên Tèo phải nhờ tới bạn lập trình thuật toán để tìm ra lời giải giúp Tèo. Bài toán có yêu cầu rất đơn giản, cho ngẫu nhiên số N, hỏi rằng nếu được tung một con xúc xắc không giới hạn số lần và lấy tổng số chấm trên mặt xúc xắc cộng lại với nhau, hỏi có bao nhiêu cách tung để tổng số chấm trong mọi lần tung xúc xắc bằng N. Bạn hãy giúp Tèo giải quyết bài toán này nhé, vì số cách tung có thể quá lớn, nên bạn hãy chia dư kết quả với modulo 10^9 + 7

// Input Format

// Dòng duy nhất chứa số nguyên dương N

// Constraints

// 1<=N<=10^6;

// Output Format

// Kết quả của bài toán

// Sample Input 0

// 7
// Sample Output 0

// 63
// Sample Input 1

// 3
// Sample Output 1

// 4