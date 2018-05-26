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

int n, m, k;
int a[1010][1010];
double dp[1010][1010];

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    cin >> n >> m >> k;
    memset(a, 0, sizeof a);

    for(int i = 0; i < k; i++) {
        int u, v;
        cin >> u >> v;
        a[u][v] = 1;
    }

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            dp[i][j] = INF;
        }
    }

    dp[0][0] = 0;

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            if(a[i + 1][j + 1]) {
                dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + 100 * sqrt(2));
            }
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + 100);
            dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + 100);
        }
    }

    cout << fixed << setprecision(0) << dp[n][m] << "\n";

}
