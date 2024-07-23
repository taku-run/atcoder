#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int A, B, C, D, L, R;
  cin >> A >> B >> C >> D;
  L = A + B;
  R = C + D;

  if (L > R) {
    cout << "Left" << endl;
  } else if (L == R) {
    cout << "Balanced" << endl;
  } else {
    cout << "Right" << endl;
  }
  return 0;
}
