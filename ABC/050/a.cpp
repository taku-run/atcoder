#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  } else if (op == "-") {
    cout << A - B << endl;
  }
  return 0;
}
