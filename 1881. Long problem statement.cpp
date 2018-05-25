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

    int n, m, k;
    cin >> n >> m >> k;

    vi a;

    string u;
    for(int i = 0; i < k; i++) {
        cin >> u;
        a.push_back((int) u.size());
    }

    int lines = 1;
    int cur = 0;

    for(int i = 0; i < k; i++) {
        if(cur + a[i] > m) {
            lines++;
            cur = a[i] + 1;
        } else {
            cur += a[i] + 1;
        }
    }

    cout << (int) ceil(lines * 1.0 / n) << "\n";


}
