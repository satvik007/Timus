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

int dp[60010];

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int n;
    cin >> n;

    int u;
    vi a;

    for(int i = 1; i <= 60000; i += 2) {
        dp[i] = (((i + 1) / 2) % 2);
    }


    int cnt = 0;

    for(int i = 0; i < n; i++) {
        cin >> u;
        cnt += dp[u];
        a.push_back(u);
    }

    int ans = cnt % 2;


    cout << ((ans) ? "Stannis\n" : "Daenerys\n");

}
