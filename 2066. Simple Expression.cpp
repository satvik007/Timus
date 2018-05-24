#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int a, b, c;
    cin >> a >> b >> c;

    int v[20];

    v[0] = a + b + c;
    v[1] = a + b - c;
    v[2] = a + b * c;
    v[3] = a - b + c;
    v[4] = a - b - c;
    v[5] = a - b * c;
    v[6] = a * b + c;
    v[7] = a * b - c;
    v[8] = a * b * c;

    cout << *min_element(v, v + 8) << "\n";

    return 0;
}
