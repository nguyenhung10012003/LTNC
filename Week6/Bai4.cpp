#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string res = "";
    for (int i = 0; i < s.size() - 1; i++) {
        res+=s[i];
        if (s[i] == s[i+1]) res = res + "*";
    }
    res+=s[s.size() - 1];
    cout << res;

    return 0;
}
