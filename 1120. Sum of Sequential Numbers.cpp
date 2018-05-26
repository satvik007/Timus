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



int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    ll n;
    cin >> n;

    ll ans = 0;

    for(ll i = 1; i * i <= 2 * n; i++) {
        if(2 * n % i == 0) {
            ll b = (2 * n / i - i + 1);
            if(b % 2L) continue;
            ll a = b / 2;
            if(a >= 1)
                ans = max(ans, i);
        }
    }

    cout << (2 * n / ans - ans + 1) / 2 << " " << ans << "\n";

}
