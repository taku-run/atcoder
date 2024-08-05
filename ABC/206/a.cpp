#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    cin >> N;
    int kingaku = (108 * N) / 100;
    if (kingaku < 206) {
        cout << "Yay!" << endl;
    } else if (kingaku == 206) {
        cout << "so-so" << endl;
    } else if (kingaku > 206) {
        cout << ":(" << endl;
    }
    return 0;
}
