#include <iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int max;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        max = (max > a[i] ? max : a[i]);
    }
    vector<int> b(max);
    for (int i = 0; i < n; i++) {
        b[a[i]] ++;
    }
    
    set<int> c;
    for (int i = 0; i < n; i++) {
        if (b[a[i]] > 1) c.insert(a[i]);
    }
    
    for (set<int>::iterator it = c.begin(); it != c.end(); it++) cout << *it << " " << b[*it] << endl;

    return 0;
}

