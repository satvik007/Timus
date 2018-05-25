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

const int INF = 1 << 30;

string func(int n) {
    string res;
    for(int i = 1; i <= n; i++) {
        res += "sin(" + to_string(i);
        if(i != n) {
            res += (i % 2) ? "-" : "+";
        }
    }
    for(int i = 1; i <= n; i++) {
        res += ")";
    }
    return res;
}

string an(int n) {
    string res;
    for(int i = 1; i < n; i++) {
        res += "(";
    }
    for(int i = 1; i <= n; i++) {
        res += func(i);
        res += "+" + to_string(n - i + 1) + ")";
    }
    return res.substr(0, res.size() - 1);
}

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int n;
    cin >> n;

    cout << an(n) << "\n";

}
