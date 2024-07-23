#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, K;
  cin >> N >> K;
  int count = 1;

  for (int i = 0; i < N; i++) {
    if (count * 2 < count + K ) {
      count *= 2;
    } else {
      count += K;
    }
  }

  cout << count << endl;
  return 0;
}
