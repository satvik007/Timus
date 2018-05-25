#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9

map <string, int> map1;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin >> n;
    cin.ignore();

    while(n--) {
        string u;
        getline(cin, u);
        if(map1.count(u)) map1[u]++;
        else map1[u] = 1;
    }

    int ans = -1;
    string v;

    for(auto el: map1) {
        if(el.second > ans) {
            ans = el.second;
            v = el.first;
        }
    }

    cout << v << "\n";



    return 0;
}
