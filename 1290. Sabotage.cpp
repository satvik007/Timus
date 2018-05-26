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

    int n;
    cin >> n;

    int u;
    vi a;
    for(int i = 0; i < n; i++) {
        cin >> u;
        a.push_back(u);
    }

    sort(a.begin(), a.end());

    int cnt = n;
    int k = 0;

    vi b;

    for(int i = 0; i < n; i++) {
        while(a[i] > k) {
            b.push_back(cnt); k++;
        }
        cnt--;
    }

    //for(auto el: b) cout << el << " "; cout << "\n";

    reverse(b.begin(), b.end());

    cnt = (int) b.size();
    k = 0;

    vi c;

    for(int i = 0; i < (int) b.size(); i++) {
        while(b[i] > k) {
            c.push_back(cnt); k++;
        }
        cnt--;
    }

    for(auto el: c) cout << el << "\n";




}
