#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, K;
  cin >> N >> K;
  ll ans = N;
  for (int i = 0; i < K; i++) {
    if (ans % 200 == 0) {
      ans /= 200;
    } else {
      ans = ans * 1000 + 200;
    }
  }
  cout << ans << endl;
  return 0;
}
