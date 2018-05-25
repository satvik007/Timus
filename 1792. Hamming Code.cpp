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



bool f(vi a) {
    return ((a[0] ^ a[1] ^ a[3]) == a[6] && (a[1] ^ a[2] ^ a[3]) == a[4] && (a[0] ^ a[2] ^ a[3]) == a[5]);
}

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    vi a(7);

    for(int i = 0; i < 7; i++) {
        cin >> a[i];
    }

    if(f(a)) {
        for(auto el: a) cout << el << " ";
    } else {
        for(int i = 0; i < 7; i++) {
            a[i] = !a[i];
            if(f(a)) {
                for(auto el: a) cout << el << " ";
            }
            a[i] = !a[i];
        }
    }

    cout << "\n";


}
