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

int a[12];

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int u, v;
    cin >> u >> v;

    int cnt = 0;
    for(int i = 0; i < 10; i++) {
        cin >> a[i];
        cnt += a[i];
    }

    cnt *= 20;

    v -= cnt;

    if(u <= v) {
        cout << "No chance.\n";
    } else {
        cout << "Dirty debug :(\n";
    }


}
