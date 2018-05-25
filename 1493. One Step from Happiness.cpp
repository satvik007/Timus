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


int f(int n) {
    string s = to_string(n);
    while(s.size() < 6) s = "0" + s;
    int cnt = 0;
    for(int i = 0; i < 3; i++) {
        cnt += s[i] - '0';
        cnt -= s[s.size() - i - 1] - '0';
    }
    return cnt;
}

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int n;
    cin >> n;

    if(f(n + 1) == 0 || f(n - 1) == 0) cout << "Yes\n";
    else cout << "No\n";


}
