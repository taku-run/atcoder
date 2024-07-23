#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
int func (int N) {
  if (N < 10) return N;
  return func(N / 10) + N % 10;
}

int main() {
  int N;
  cin >> N;
  int S = func(N);

  if (N % S == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
