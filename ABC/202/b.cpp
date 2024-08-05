#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    for (const auto c: S) {
        if (c == '6') {
            cout << 9;
        } else if (c == '9') {
            cout << 6;
        } else {
            cout << c;
        }
    }
    cout << endl;
    return 0;
}
