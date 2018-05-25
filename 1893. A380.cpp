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


int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    string a;
    cin >> a;

    int n = stoi(a.substr(0, a.size() - 1));
    char seat = a[a.size() - 1];

    if(n <= 2) {
        if(seat == 'A' || seat == 'D') {
            cout << "window\n";
        } else {
            cout << "aisle\n";
        }
    } else if(n <= 20) {
        if(seat == 'A' || seat == 'F') {
            cout << "window\n";
        } else {
            cout << "aisle\n";
        }
    } else {
        if(seat == 'A' || seat == 'K') {
            cout << "window\n";
        } else if(seat == 'C' || seat == 'D' || seat == 'G' || seat == 'H') {
            cout << "aisle\n";
        } else {
            cout << "neither\n";
        }
    }

}
