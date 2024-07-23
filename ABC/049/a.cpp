#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string c;
  cin >> c;

  if (c == "a" || c == "e" || c == "i" || c == "o" || c == "u") {
    cout << "vowel" << endl;
  } else {
    cout << "consonant" << endl;
  }
  return 0;
}
