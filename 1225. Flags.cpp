#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9

ll dp[60];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    memset(dp, 0, sizeof dp);

    dp[1] = 2;
    dp[2] = 2;

    for(int i = 3; i <= 50; i++) {
        dp[i] = 2 * dp[i - 2] + dp[i - 3];
    }

    int n;
    cin >> n;

    cout << dp[n] << "\n";

    return 0;
}
