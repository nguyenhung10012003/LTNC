string a = "ouiea";
string pigLatin(string word) {
    if (a.find(word[0]) == -1) {
        char c = word[0];
        word.erase(0, 1);
        word = word + c + "ay";
    }
    else word = word + "way";
    return word;
}