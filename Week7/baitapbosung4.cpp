#include <iostream>
#include<vector>

using namespace std;

void process(vector<int> a) {
    int x;
    cin >> x;
    vector<int>::iterator low = lower_bound(a.begin(),a.end(),x);
    if (*low == x) cout << "Yes " << (low - a.begin() + 1) << endl;
    else {
        if (a[a.size() - 1] > x)
            cout << "No " << (low - a.begin() + 1) << endl; 
        else cout << "No and don't have upper bound" << endl;
    }
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) process(a);

    return 0;
}
