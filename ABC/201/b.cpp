#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, T;
  string S;
  cin >> N;
  // 一番目の山の高さ
  int OneT = 2;
  // 二番目の山の名前
  string SecondS = "";
  // 二番目の山の高さ
  int SecondT = 0;

  for (int i = 0; i < N; i++) {
    cin >> S >> T;
    if (i == 0) {
      SecondS = S;
      SecondT = T;
    } else if (i > 0) {
      if (T >= SecondT) {
        OneT = T;
      } else if (T <= OneT && T >= SecondT) {
        SecondS = S;
        SecondT = T;
      }
    }
  }
  cout << SecondS << endl;
  return 0;
}
