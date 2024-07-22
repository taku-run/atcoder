#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int R;
  cin >> R;

  if (99 >= R) {
    cout << 100 - R << endl;
  } else if (199 >= R) {
    cout << 200 - R << endl;
  } else if (299 >= R) {
    cout << 300 - R << endl;
  }
  
  return 0;
}
