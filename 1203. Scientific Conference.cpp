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

#define maxn 100010

int n;
ii a[maxn];
int dp[40000];

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    cin >> n;
    int u, v;

    for(int i = 0; i < n; i++) {
        cin >> u >> v;
        a[i] = {u, v};
    }

    sort(a, a + n);

    memset(dp, 0, sizeof dp);

    int k = 0;

    for(int i = 1; i <= 30000; i++) {
        dp[i] = max(dp[i], dp[i - 1]);
        if(k < n && a[k].first == i) {
            dp[a[k].second + 1] = max(dp[a[k].second + 1], dp[i] + 1);
            while(k < n && a[k].first == i) k++;
        }
    }

    int ans = *max_element(dp, dp + 35000);
    cout << ans << "\n";


}