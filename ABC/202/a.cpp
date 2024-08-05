#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int Sa = 7 - a;
    int Sb = 7 - b;
    int Sc = 7 - c;
    cout << Sa + Sb + Sc << endl;
    return 0;
}
