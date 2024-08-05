#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    cout << A + B + C -min({A, B, C}) << endl;
    return 0;
}
