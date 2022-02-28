#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    float array[1000];
    
    for (int i = 0; i < n; i++) cin >> array[i];
    for (int i = n - 1; i >= 0; i--) cout << fixed << setprecision(2) << array[i] << " ";
    
    return 0;
}