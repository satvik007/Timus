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



int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int n;
    cin >> n;

    map <int, int> map1;

    int u;

    for(int i = 0; i < n; i++) {
        cin >> u;
        if(map1.count(u)) map1[u]++;
        else map1[u] = 1;
    }

    int ans = 0;
    int ind = 0;

    for(auto el: map1) {
        if(el.second > ans) {
            ans = el.second;
            ind = el.first;
        }
    }

    cout << ind << "\n";

}