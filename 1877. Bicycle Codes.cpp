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

    string a, b;

    cin >> a >> b;

    int n = stoi(a);
    int m = stoi(b);

    if(!(n % 2) || (m % 2)) cout << "yes\n";
    else cout << "no\n";



    return 0;
}
