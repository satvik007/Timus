#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    int u = !(n % 2);
    int v = !(m % 2);

    if(u || v) cout << "[:=[first]\n";
    else cout << "[second]=:]\n";

    return 0;
}
