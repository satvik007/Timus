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

int n;

pair <double, double> a[210];

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a, a + n);

    int cnt = 2;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int cur = 2;
            if(a[i].first == a[j].first) {
                for(int k = 0; k < n; k++) {
                    if(k != i && k != j && a[k].first == a[i].first) {
                        cur++;
                    }
                }
            } else if(a[i].second == a[j].second) {
                for(int k = 0; k < n; k++) {
                    if(k != i && k != j && a[k].second == a[i].second) {
                        cur++;
                    }
                }
            } else {
                double val = (a[j].second - a[i].second) / (a[j].first - a[i].first);
                for(int k = 0; k < n; k++) {
                    if(k != i && k != j) {
                        double c = (a[k].second - a[i].second) / (a[k].first - a[i].first);
                        if(abs(c - val) < 1e-9) cur++;
                    }
                }
            }
            cnt = max(cnt, cur);
        }
    }

    cout << cnt << "\n";

}
