#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9
int a[110];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int k, n;
    cin >> k >> n;

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cnt = max(cnt + a[i] - k, 0);
    }

    cout << cnt << "\n";


    return 0;
}
