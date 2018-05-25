#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9

map <int, int> map1;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++) map1[i] = 0;

    for(int i = 0; i < m; i++) {
        int u;
        cin >> u;
        map1[u]++;
    }

    cout << fixed << setprecision(2);
    for(int i = 1; i <= n; i++) {
        cout << 100.0 * map1[i] / m  << "%\n";
    }

    return 0;
}
