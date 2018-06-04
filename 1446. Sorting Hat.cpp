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

#define maxn 100010

map <string, vector <string>> map1;


int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int n;
    cin >> n;

    string u, v;
    getline(cin, u);
    for(int i = 0; i < n; i++) {
        getline(cin, u);
        getline(cin, v);
        map1[v].push_back(u);
    }

    cout << "Slytherin:\n";
    for(auto el: map1["Slytherin"]) {
        cout << el << "\n";
    }
    cout << "\n";

    cout << "Hufflepuff:\n";
    for(auto el: map1["Hufflepuff"]) {
        cout << el << "\n";
    }
    cout << "\n";

    cout << "Gryffindor:\n";
    for(auto el: map1["Gryffindor"]) {
        cout << el << "\n";
    }
    cout << "\n";
    cout << "Ravenclaw:\n";

    for(auto el: map1["Ravenclaw"]) {
        cout << el << "\n";
    }
    cout << "\n";

}