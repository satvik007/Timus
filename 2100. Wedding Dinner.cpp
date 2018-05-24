#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

#define inf (int)1e9


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  //  freopen("in.txt", "r", stdin);
  //  freopen("out.txt", "w", stdout);

    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 0; i < n; i++ ){
        string u;
        cin >> u;
        cnt++;
        if(u.find("+one") != string::npos) {
            cnt++;
        }
    }

    cnt += 2;

    if(cnt == 13) cnt++;

    cout << cnt * 100 << "\n";


    return 0;
}
