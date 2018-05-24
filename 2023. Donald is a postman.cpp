#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9

int n;
map <char, int> map1;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    map1['A'] = map1['P'] = map1['O'] = map1['R'] = 1;
    map1['B'] = map1['M'] = map1['S'] = 2;
    map1['D'] = map1['G'] = map1['J'] = map1['K'] = map1['T'] = map1['W'] = 3;

    cin >> n;

    int cur = 1;
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        string u;
        cin >> u;
        int v = map1[u[0]];
        cnt += abs(cur - v);
        cur = v;
    }

    cout << cnt << "\n";

    return 0;
}
