#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, K;
    int s = 0;
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            s += (100 * i + j);
        }
    }
    cout << s << endl;
    return 0;
}
