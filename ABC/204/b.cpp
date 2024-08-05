#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, a;
    int kinomi = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (a <= 10) {
            kinomi += 0;
        } else {
            kinomi += a - 10;
        }
    }
    cout << kinomi << endl;
    return 0;
}
