#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9

vector <ll> a;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    ll u;
    while(cin >> u) {
        a.push_back(u);
    }
    cout << fixed << setprecision(4);
    for(int i = a.size() - 1; i >= 0; i--) {
        cout << sqrt(a[i]) << "\n";
    }

    return 0;
}
