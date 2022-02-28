#include<iostream>

using namespace std;

int main() {
    
    int total, legs;
    cin >> total >> legs;
    bool check = false;
    
    for (int i = 1; i <= total; i++) {
        if (i * 2 + (total - i) * 4 == legs) {
            check = true;
            cout << "chicken = " << i << ", dog = " << total - i;
            break;
        }
    }
    
    if (!check) cout << "invalid";
    
    return 0;
}