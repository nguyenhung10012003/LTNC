void printArrow(int n, bool left) {
    vector<string> v;
    string s(2*n - 1, ' ');
    for (int i = 0; i < n; i++) v.push_back(s);

    int pos = 0;
    for (int i = 0; i < n; i++) {
        for (int j = pos; j < n - i + pos; j++) {
            v[i][j] = '*';
        }
        pos += 2;
    }

    if (left) {
        for (int i = 0; i < n; i++) reverse(v[i].begin(), v[i].end());
    }
    
    for (int i = 0; i < n; i++) cout << v[i] << endl;
    for (int i = n - 2; i >= 0; i--) cout << v[i] << endl;
}