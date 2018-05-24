#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9

int a[1010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    int id = 0;

    for(int i = 1; i < n - 1; i++) {
        int cur = a[i] + a[i-1] + a[i+1];
        if(cur > ans) {
            ans = cur;
            id = i + 1;
        }
    }

    cout << ans << " " << id << "\n";

    return 0;
}
