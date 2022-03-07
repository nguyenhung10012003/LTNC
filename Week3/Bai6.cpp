#include<iostream>
#include<string>

using namespace std;

int countWord(string s) {
    int count = 1;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') count++;
    }

    return count;
}

int main() {

    string s;
    cin >> s;
    getline(cin, s);
    cout << countWord(s);

    return 0;
}