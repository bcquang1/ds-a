#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int i  = s.size() - 1;

    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i == -1){
        for(int i = 0; i < s.size(); i++) cout << "0";
    }
    else{
        s[i] = '1';
        cout << s << endl;
    }
    return 0;
}

// Cho xâu nhị phân S, hãy in ra xâu nhị phân kế tiếp của S. Trong trường hợp S là xâu nhị phân cuối cùng thì in ra xâu nhị phân đầu tiên.

// Input Format

// 1 dòng duy nhất chưa xâu nhị phân S

// Constraints

// 1<=len(S)<=1000;

// Output Format

// In ra xâu nhị phân kế tiếp.

// Sample Input 0

// 1110010
// Sample Output 0

// 1110011
// Sample Input 1

// 11111
// Sample Output 1

// 00000