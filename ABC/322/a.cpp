#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N;
  string S;
  cin >> N >> S;
  int ans = -1;
  for (int i = 0; i < N - 2; i++) {
    if (S[i] == 'A' and S[i + 1] == 'B' and S[i + 2] == 'C') {
      ans = i + 1;
      break;
    }
  }
  cout << ans << endl;
}
