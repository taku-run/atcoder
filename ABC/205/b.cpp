#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N, A;
    cin >> N;
    vector<bool> apper(N);
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        apper[a - 1] = true;
    }
    for (int i = 0; i < N; i++) {
        if (!apper[i]) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n" << endl;
    return 0;
}
