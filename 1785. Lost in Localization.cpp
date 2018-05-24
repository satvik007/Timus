#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9

/*
 * from 1 to 4	few
from 5 to 9	several
from 10 to 19	pack
from 20 to 49	lots
from 50 to 99	horde
from 100 to 249	throng
from 250 to 499	swarm
from 500 to 999	zounds
from 1000	legion
 *
 */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin >> n;

    if(n >= 1 && n <= 4) cout << "few\n";
    else if(n <= 9) cout << "several\n";
    else if(n <= 19) cout << "pack\n";
    else if(n <= 49) cout << "lots\n";
    else if(n <= 99) cout << "horde\n";
    else if(n <= 249) cout << "throng\n";
    else if(n <= 499) cout << "swarm\n";
    else if(n <= 999) cout << "zounds\n";
    else if(n >= 1000) cout << "legion\n";

    return 0;
}
