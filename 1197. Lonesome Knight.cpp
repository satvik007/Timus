#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9

int dr[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dc[] = {1, 2, 2, 1, -1, -2, -2, -1};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int tc;
    cin >> tc;

    while(tc--) {
        string a;
        cin >> a;
        int u = a[0] - 'a';
        int v = a[1] - '1';

        int cnt = 0;

        for(int k = 0; k < 8; k++) {
            int tx = u + dr[k];
            int ty = v + dc[k];
            if(tx >= 0 && ty >= 0 && tx < 8 && ty < 8) cnt++;
        }

        cout << cnt << "\n";

    }

    return 0;
}
