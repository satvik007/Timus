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

    int last;
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i == 0) last = a[0];
        if(last == a[i]) {
            cnt++;
        } else {
            cout << cnt << " " << last << " ";
            last = a[i];
            cnt = 1;
        }
    }

    cout << cnt << " " << last;



    return 0;
}
