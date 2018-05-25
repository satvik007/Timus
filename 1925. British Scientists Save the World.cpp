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

const int INF = 1 << 30;



int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int n, k;
    cin >> n >> k;

    int cnt = 0;

    for(int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        cnt += u - v - 2;
    }

    cnt += k - 2;

    if(cnt >= 0) {
        cout << cnt << "\n";
    } else {
        cout << "Big Bang!\n";
    }



}
