#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, x[100];
bool cot[100], cheo1[100], cheo2[100];

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] == 0 && cheo1[i - j + n] == 0 && cheo2[i + j - 1] == 0){
            x[i] = j;
            cot[j] = 1;
            cheo1[i - j + n] = 1;
            cheo2[i + j - 1] = 1;
            if(i == n){
                for(int k = 1;k <= n; k++){
                    for(int col = 1; col <= n; col++){
                        if(x[k] == col) cout << "Q";
                        else cout << "_";
                    }
                    cout << endl;
                }
                cout << endl;
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
    return 0;
}