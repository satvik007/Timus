#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9

set <int> a, b;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin >> n;

    int u;

    for(int i = 0; i < n; i++) {
        cin >> u;
        a.insert(u);
    }

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> u;
        if(a.count(u)) b.insert(u);
    }

    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> u;
        if(b.count(u)) cnt++;
    }

    cout << cnt << "\n";

    return 0;
}
