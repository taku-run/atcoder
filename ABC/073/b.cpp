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
  int count = 0;

  for (int i = 0; i < N; i++) {
    int l, r;
    cin >> l >> r;
    count += r - l + 1;
  }

  cout << count << endl;
  return 0;
}
