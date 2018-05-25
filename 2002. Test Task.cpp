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

map <string, string> map1;
map <string, string> map2;
int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int n;
    cin >> n;

    string u, v, w;
    for(int i = 0; i < n; i++) {
        cin >> u;
        if(u == "register") {
            cin >> u >> v;
            if(map1.count(u)) {
                cout << "fail: user already exists\n";
            } else {
                map1[u] = v;
                cout << "success: new user added\n";
            }
        } else if(u == "login") {
            cin >> u >> v;
            if(!map1.count(u)) {
                cout << "fail: no such user\n";
            }  else if(map1[u] != v) {
                cout << "fail: incorrect password\n";
            } else if(map2.count(u)) {
                cout << "fail: already logged in\n";
            } else {
                map2[u] = v;
                cout << "success: user logged in\n";
            }
        } else if(u == "logout") {
            cin >> u;
            if(!map1.count(u)) {
                cout << "fail: no such user\n";
            } else if(!map2.count(u)) {
                cout << "fail: already logged out\n";
            } else {
                map2.erase(u);
                cout << "success: user logged out\n";
            }
        }
    }


}
