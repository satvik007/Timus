#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9

map <char, int> map1;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    for(int i = 0; i <= 25; i++) {
        map1[i + 'a'] = (i % 3) + 1;
    }

    map1[' '] = 1;
    map1['.'] = 1;
    map1[','] = 2;
    map1['!'] = 3;

    string s;

    getline(cin, s);

    int cnt = 0;
    for(auto el: s) {
        cnt += map1[el];
    }

    cout << cnt << "\n";


    return 0;
}
