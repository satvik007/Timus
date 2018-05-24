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

    ll n;
    cin >> n;

    if(n == 0) {
        cout << 1 << "\n";
    } else if (n < 0){
        n = abs(n);
        cout << (- n * (n + 1) / 2 + 1) << "\n";
    } else {
        cout << (n * (n + 1) / 2) << "\n";
    }


    return 0;
}
