#include<iostream>
#include<vector>

using namespace std;

bool check(vector<int> arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n-1-i]) return false;
    }
    
    return true;
}

int main() {
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0;i < n; i++) cin >> arr[i];
    
    if (check(arr,n)) cout << "Symmetric array.";
    else cout << "Asymmetric array.";
    
    return 0;
}