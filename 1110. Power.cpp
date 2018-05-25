#define BZ
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using ll = int64_t;
using ld = long double;
using ull = uint64_t;
using namespace std;
using namespace __gnu_pbds;
typedef vector <int> vi;
typedef pair <int, int> ii;
const int INF = 1 << 30;

int modpow(int base, int p, int mod) {
    ll res = 1;
    while(p) {
        if(p & 1) {
            res = (res * base) % mod;
        }
        base = (int) ((base * (ll)base) % mod);
        p >>= 1;
    }
    return (int) res;
}

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int n, m, y;
    cin >> n >> m >> y;

    vi a;

    for(int i = 0; i < m; i++) {
        if(modpow(i, n, m) == y)  {
            a.push_back(i);
        }
    }

    if(a.empty()) {
        cout << "-1\n";
    } else {
        for(auto el: a) cout << el << " ";
    }

}
