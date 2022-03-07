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

int main() {
    
    string s;
    getline(cin, s);
    
    int countWord = 0, countNumber = 0, countOther = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) countWord++;
        else if (isdigit(s[i])) countNumber++;
        else countOther++;
    }
    
    cout << countWord << " " << countNumber << " " << countOther;
    
    return 0;
}