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
    int A = 0;
    for (int i = 1; i <= N; i++) {
        A += i;
        if (N <= A) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
