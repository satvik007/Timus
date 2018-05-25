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

int visited[200010];
int lef[200010];
int righ[200010];

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    string a;
    cin >> a;
    int n = (int) a.size();
    int u = 0, v = 1;
    memset(visited, 0, sizeof visited);

    for(int i = 0; i < n; i++) {
        lef[i] = i - 1;
        righ[i] = i + 1;
    }

    while(v < n) {
        while(a[u] == a[v] && u >= 0 && v < n) {
            visited[u] = 1;
            visited[v] = 1;
            lef[righ[v]] = lef[u];
            righ[lef[u]] = righ[v];
            u = lef[u];
            v = righ[v];
        }
        u = v;
        v++;
    }

    for(int i = 0; i < n; i++) {
        if(!visited[i])
            cout << a[i];
    }

    cout << "\n";

}
