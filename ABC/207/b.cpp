#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long long mizu = A, aka = 0;
    for (int i = 1; i <= A; i++) {
        mizu += B;
        aka += C;
        if (mizu <= D * aka) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
