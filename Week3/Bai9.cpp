#include<iostream>
#include<string>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    int i = 0;
    while (s[i] == ' ') {
        cout << s[i];
        i++;
    }

    while (i < s.size()) {
        if (s[i] != ' ') cout << s[i];
        else {
            while (s[i + 1] == ' ') s.erase(i + 1, 1);
            cout << " ";
        }
        i++;
    }

    return 0;
}