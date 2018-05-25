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

#define maxn 200010

struct Data{
    int id, u, v;
    Data() {

    }
    Data(int i, int ua, int va) {
        id = i, u = ua, v = va;
    }
    bool operator < (Data x) {
        if(v == x.v) {
            return id < x.id;
        }
        return v >= x.v;
    }
};

Data a[maxn];

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        a[i] = Data(i, u, v);
    }

    sort(a, a + n);

    for(int i = 0; i < n; i++) {
        cout << a[i].u << " " << a[i].v << "\n";
    }

}
