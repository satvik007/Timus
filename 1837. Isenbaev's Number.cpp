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

vi a[400];
int visited[400];
map <string, int> map1;
int dist[400];

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int n;
    cin >> n;

    int k = 1;

    for(int i = 0; i < n; i++) {
        string u, v, w;
        cin >> u >> v >> w;
        if(!map1.count(u)) map1[u] = k++;
        if(!map1.count(v)) map1[v] = k++;
        if(!map1.count(w)) map1[w] = k++;
        a[map1[u]].push_back(map1[v]);
        a[map1[v]].push_back(map1[u]);
        a[map1[u]].push_back(map1[w]);
        a[map1[v]].push_back(map1[w]);
        a[map1[w]].push_back(map1[v]);
        a[map1[w]].push_back(map1[u]);
    }

    if(!map1.count("Isenbaev")) {
        for(auto el: map1)
            cout << el.first << " " << "undefined" << "\n";
        return 0;
    }

    n = k;

    memset(visited, 0, sizeof visited);
    memset(dist, -1, sizeof dist);
    queue <int> q;
    q.push(map1["Isenbaev"]);
    visited[map1["Isenbaev"]] = 1;
    dist[map1["Isenbaev"]] = 0;

    while(!q.empty()) {
        int cur = q.front(); q.pop();
        for(auto el: a[cur]) {
            if(!visited[el]) {
                visited[el] = 1;
                q.push(el);
                dist[el] = dist[cur] + 1;
            }
        }
    }

    for(auto el: map1) {
        if(dist[el.second] == -1) {
            cout << el.first << " " << "undefined" << "\n";
        } else {
            cout << el.first << " " << dist[el.second] << "\n";
        }
    }

}
