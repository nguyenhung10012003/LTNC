#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    vector<double> vectorA(n), vectorB(n);
    
    for (int i = 0; i < n; i++) cin >> vectorA[i];
    for (int i = 0; i < n; i++) cin >> vectorB[i];
    
    double tich = 0;
    for (int i = 0; i < n; i++) {
        tich = vectorA[i] * vectorB[i] + tich;
    }
    
    cout << fixed << setprecision(2) << tich;
    
    return 0;
}