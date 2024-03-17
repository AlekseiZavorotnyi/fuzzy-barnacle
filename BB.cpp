#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

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
    for (ll i = 0; i < (1e10); ++i) {
        if (ind < n) {
            if (i != A[ind]) {
                cnt += 1;
            }
            else {
                ind += 1;
            }
        }
        else {
            cnt += 1;
        }
        if (cnt == kex[n1]) {
            ans[cnt] = i;
            n1 += 1;
        }
        if (n1 > (q - 1)) {
            break;
        }
    }
    for (int i = 0; i < q; ++i) {
        cout << ans[kex1[i]] << ' ';
    }
}
