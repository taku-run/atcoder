#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string A, B;
  cin >> A >> B;

  if (A.size() < B.size()) {
    cout << B << endl;
  } else if (A.size() > B.size()) {
    cout << A << endl;
  }
  return 0;
}
