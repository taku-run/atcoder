#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, A, B, C, kotae;
  cin >> N >> A >> B;
  kotae = A + B;

  for (int i = 0; i < N; i++) {
    cin >> C;
    if (kotae == C) {
      cout << i + 1 << endl;
    }
  }

  return 0;
}
