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
    
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    if (S == "Y") {
      cout << "Four" << endl;
      return 0;
    }
  }

  cout << "Three" << endl;
  return 0;
}
