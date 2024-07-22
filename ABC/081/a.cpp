#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
int ans;

int main() {
  string s1s2s3;
  cin >> s1s2s3;

  if (s1s2s3[0] == '1') ans++;
  if (s1s2s3[1] == '1') ans++;
  if (s1s2s3[2] == '1') ans++;
  cout << ans << endl;
  return 0;
}
