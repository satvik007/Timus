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

    int k = 1;

    for(int i = 0; i < 2 * n - 1; i++) {
        for(int j = 0; j <= i; j++) {
            if(n - 1 - i + j >= 0 && j < n && n - 1 - i + j < n) {
                a[j][n - 1 - i + j] = k++;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }



    return 0;
}
