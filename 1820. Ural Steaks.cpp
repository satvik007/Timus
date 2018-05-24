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

    int n, k;
    cin >> n >> k;
    if(k == 1) {
        cout << n * 2 << "\n";
    } else if(n == 1) {
        cout << 2 << "\n";
    } else if(n == 2) {
        cout << 2 << "\n";
    } else {
        cout << (int) ceil(2.0 * n / k) << "\n";
    }


    return 0;
}
