#include<iostream>
#include<vector>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    vector<int> arr1(n),arr2(n);
    bool compare = true;
    
    for (int i = 0; i < n; i++) cin >> arr1[i];
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        if (arr2[i] != arr1[i]) {
            compare = false;
            break;
        }
    }
    
    if (compare) cout << "YES";
    else cout << "NO";
    
    return 0;
}