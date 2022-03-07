#include<iostream>
#include<string>

using namespace std;

bool isalpha(char c) {
    if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z') return true;
    return false;
}

bool isdigit(char c) {
    if (c >= '0' && c <= '9') return true;
    return false;
}

bool isValid(string password) {
    if (isdigit(password[0])) return false;
    if (password.size() > 15 || password.size() < 6) return false;
    for (int i = 0; i < password.size(); i++) {
        if (!isalpha(password[i]) && !isdigit(password[i])) return false;
    }

    return true;
}

int main() {

    string pass;
    getline(cin, pass);
    if (isValid(pass)) cout << "Valid username.";
    else cout << "Invalid username.";

    return 0;
}