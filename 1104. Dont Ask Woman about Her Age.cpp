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

map <char, int> map1;

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    for(int i = 0; i <= 9; i++) {
        map1['0' + i] = i;
    }

    for(int i = 0; i < 26; i++) {
        map1['A' + i] = i + 10;
    }

    string s;
    cin >> s;

    int k = 2;

    for(auto el: s) {
        k = max(k, map1[el] + 1);
    }

    for(; k <= 36; k++) {
        ll res = 0;
        ll base = 1;

        for(int i = s.size() - 1; i >= 0; i--) {
            res = (res + base * map1[s[i]]) % (k - 1);
            base = (base * base) % (k - 1);
        }

        if(res % (k - 1) == 0) {
            cout << k << "\n";
            return 0;
        }
    }

    cout << "No solution.\n";

}