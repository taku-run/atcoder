#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, A, B, T;
  cin >> N >> A >> B;
  T = N * A;

  if (T >= B) {
    cout << B << endl;
  } else if (T == B) {
    cout << T << endl;
  } else if (T <= B) {
    cout << T << endl;
  }
  return 0;
}
