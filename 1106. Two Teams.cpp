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

vi a[110];
int color[110];


void bfs(int u) {
    queue <int> q;
    q.push(u);

    while(!q.empty()) {
        int cur = q.front(); q.pop();
        for(auto el: a[cur]) {
            if(color[el] == -1) {
                color[el] = !color[cur];
                q.push(el);
            }
        }
    }

}

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    cin >> n;


    bool flag = false;

    for(int i = 1; i <= n; i++) {
        int u;
        while(cin >> u, u != 0) {
            a[i].push_back(u);
        }
        if(a[i].size() == 0) flag = true;
    }

    if(flag) {
        cout << "0" << "\n";
        return 0;
    }

    memset(color, -1, sizeof color);

    for(int i = 1; i <= n; i++) {
        if(color[i] == -1) {
            color[i] = 0;
            bfs(i);
        }
    }

    vi ans;
    for(int i = 1; i <= n; i++) {
        if(color[i] == 0) ans.push_back(i);
    }

    cout << ans.size() << "\n";

    for(auto el: ans) cout << el << " "; cout << "\n";

}
