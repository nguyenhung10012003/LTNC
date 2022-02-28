#include<iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int t = n + 1;
    bool c = true;

    for (int i = 0; i < 2 * n + 1; i++) {
        if (c) t--;
        else t++;
        for (int j = 0; j < 2 * n + 1; j++) {
            if (j >= t && j <= 2 * n - t) cout << "* ";
            else cout << ". ";
        }
        cout << endl;
        if (t == 0) c = false;
    }

    return 0;
}