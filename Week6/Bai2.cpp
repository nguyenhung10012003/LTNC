#include <iostream>
#include<vector>

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
    
    for (int i = 0; i < n; i++) {
        if (b[a[i]] == 1) cout  << a[i] << " ";
    }

    return 0;
}
