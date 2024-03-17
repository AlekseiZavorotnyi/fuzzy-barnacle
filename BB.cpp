#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

using str = string;

#define all(x) x.begin(), x.end()

using ll = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, q, cnt = 0, ind = 0, n1 = 0;
    cin >> n >> q;
    vector<ll> A(n);
    vector<ll> kex(q);
    vector<ll> kex1(q);
    map<ll, ll> ans;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < q; ++i) {
        cin >> kex[i];
        kex1[i] = kex[i];
    }
    sort(all(kex));
    sort(all(A));
    
    for (int i = 0; i < q; ++i) {
        cout << ans[kex1[i]] << ' ';
    }
}
