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

int a[110][110];
int dp[110][110];

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int n;
    cin >> n;

    int ans = -INF;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
            ans = max(ans, a[i][j]);
        }
    }

    memset(dp, 0, sizeof dp);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            dp[i][j] = dp[i][j-1] + dp[i-1][j] - dp[i-1][j-1] + a[i][j];
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = i; k <= n; k++) {
                for(int l = j; l <= n; l++) {
                    ans = max(dp[k][l] - dp[k][j-1] - dp[i-1][l] + dp[i-1][j-1], ans);
                }
            }
        }
    }

    cout << ans << "\n";
}
