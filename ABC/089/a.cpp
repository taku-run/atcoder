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

  if (N < 3) {
    cout << 0 << endl;
  } else if (N > 3) {
    cout << N / 3 << endl;
  } else {
    cout << 1 << endl;
  }
  return 0;
}
