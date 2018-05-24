#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9

int a[110][110];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 2 * n - 1; i++) {
        for(int j = 0; j <= i && j < n; j++) {
            if(i - j >= 0 && i - j < n)
                cout << a[i-j][j] << " ";
        }
    }


    return 0;
}
