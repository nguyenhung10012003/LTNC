void rFilter(char* s) {
    int i = strlen(s) - 1;
    while (s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a')) {
        s[i] = '_';
        i--;
    }
}