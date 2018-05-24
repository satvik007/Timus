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

    int n;
    cin >> n;

    for(ll i = 1; ; i++) {
        ll v = (i * i - i) / 2 + 1;
        if(v > INT_MAX) break;
            a.push_back(v);
    }

    for(int i = 0; i < n; i++) {
        ll u;
        cin >> u;
        if(binary_search(a.begin(), a.end(), u)) {
            cout << "1 ";
        } else {
            cout << "0 ";
        }
    }


    return 0;
}
