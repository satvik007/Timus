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

vector <string> rotate(const vector <string> &a) {
    vector <string> b(a);

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            b[i][j] = a[3 - j][i];
        }
    }

    return b;
}

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    vector <string> a(4);
    vector <string> b(4);


    for(int i = 0; i < 4; i++) {
        cin >> a[i];
        for(int j = 0; j < 4; j++) {
            if(a[i][j] == 'X') a[i][j] = 127;
            else a[i][j] = 0;
        }
    }

    for(int i = 0; i < 4; i++) {
        cin >> b[i];
    }

    string ans;
    int cnt = 4;

    vector <string> c(b);

    while(cnt--) {
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                c[i][j] = b[i][j] & a[i][j];
            }
        }
        for(int j = 0; j < 4; j++) {
            for(int i = 0; i < 4; i++) {
                if(c[j][i] != 0) ans += c[j][i];
            }
        }
        a = rotate(a);
    }

    cout << ans << "\n";



}
