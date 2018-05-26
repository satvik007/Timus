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

int a[110];

int main() {
#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    string s;
    cin >> s;


    for(int i = s.size() - 1; i > 0; i--) {
        s[i] = ((s[i] - s[i-1]) % 26 + 26) % 26 + 'a';
    }
    s[0] = (s[0] - 'a' - 5 + 26) % 26 + 'a';


    cout << s << "\n";




}
