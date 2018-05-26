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

    int n, m;
    cin >> n >> m;

    n--; m--;

    if(n == 1) {
        cout << m - 1 << "\n";
    } else if(m == 1) {
        cout << n - 1 << "\n";
    } else {
        double sl = 1.0 * n / m;
        int cnt = 0;
        for(int i = 1; i < m; i++) {
            if(abs(round(sl * i) - sl * i) < 1e-9) cnt++;
        }

        cout << (n + m - cnt - 1) << "\n";

    }


}
