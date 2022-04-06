void reverse(char* s) {
    int len = strlen(s);
    char* res = new char[len];
    for (int i = len - 1; i >= 0; i--) res[len - i - 1] = s[i];

    for (int i = 0; i < len; i++) *(s + i) = *(res + i);
}