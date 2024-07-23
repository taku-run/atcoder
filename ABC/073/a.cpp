#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string N;
  cin >> N;

  if (N[0] == '9') {
    cout << "Yes" << endl;
  } else if (N[1] == '9') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
