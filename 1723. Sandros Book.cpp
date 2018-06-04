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

map <char, int> map1;

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    string a;
    cin >> a;

    for(auto el: a) {
        if(map1.count(el)) map1[el]++;
        else map1[el] = 1;
    }

    int max1 = -1;
    string ans;

    for(auto el: map1) {
        if(el.second > max1) {
            max1 = el.second;
            ans = el.first;
        }
    }

    cout << ans << "\n";


}
