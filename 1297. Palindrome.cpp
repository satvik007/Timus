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

    string a;
    cin >> a;

    string ans;
    int max1 = 0;

    for(int i = 0; i < a.size(); i++) {
        ll u = 0, v = 0;
        ll base = 1;
        for(int j = i; j < a.size(); j++) {
            u += base * a[j];
            v = v * 37 + a[j];
            base *= 37;
            if(u == v && j - i + 1 > max1) {
                max1 = j - i + 1;
                ans = a.substr(i, max1);
            }

        }
    }

    cout << ans << "\n";

}
