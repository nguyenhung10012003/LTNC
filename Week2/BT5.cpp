#include<iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < 2*n + 1; i++) {
        for (int j = 0; j < 2*n + 1; j++) {
            if (j == i || j == 2*n - i) cout << "* ";
            else cout << ". ";
        }
        cout << endl;
    }

    return 0;
}