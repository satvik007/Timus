#ifdef BZ
    freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if(c <= a) {
        cout << a << "\n";
        return 0;
    }

    while(true) {
        if(a + b < c) {
            a += b;
        } else {
            a = c;
            break;
        }
        if(c - d > a) {
            c -= d;
        } else {
            c = a;
            break;
        }
    }

    assert(a == c);

    cout << a << "\n";
