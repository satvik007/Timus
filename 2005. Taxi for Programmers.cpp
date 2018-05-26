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

    int a[6][6];

    int n = 5;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int max1 = INF;
    vi ans;

    vi order(3);
    order[0] = 1;
    order[1] = 2;
    order[2] = 3;

    do {
        if(order[2] == 2) continue;

        int dist = a[0][order[0]] + a[order[0]][order[1]] + a[order[1]][order[2]] + a[order[2]][4];
        if(dist < max1) {
            max1 = dist;
            ans = order;
        }

    } while(next_permutation(order.begin(), order.end()));

    cout << max1 << "\n";
    cout << 1 << " " << ans[0] + 1 << " " << ans[1] + 1 << " " << ans[2] + 1 << " " << 5 << "\n";

}
