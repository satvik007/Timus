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
ll a[30];
bitset <4000000> b, c;
int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    b[2000000] = 1;
    for(int i = 1; i <= n; i++) {
        c = b << a[i];
        c |= b >> a[i];
        b = c;
    }

    for(int i = 2000000; i < 4000000; i++) {
        if(b[i] != 0) {
            cout << (i - 2000000) << "\n";
            break;
        }
    }

}
