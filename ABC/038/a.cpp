#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string S;
  int length;
  cin >> S;
  length = S.size();

  if (S[length - 1] == 'T') {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
