int* merge(int* firstArr, int len1, int* secondArr, int len2) {
    int * a = new int [len1 + len2];
    int i = 0, j = 0;
    if (firstArr[0] <= firstArr[len1 - 1]) {
        while (i < len1 && j < len2) {
            if (firstArr[i] < secondArr[j]) {
                a[i + j] = firstArr[i];
                i++;
            }
            else {
                a[i + j] = secondArr[j];
                j++;
            }
        }
    
        while (i < len1) {
            a[i + j] = firstArr[i];
            i++;
        }
    
        while (j < len2) {
            a[i + j] = secondArr[j];
            j++;
        }
    }
    else {
        while (i < len1 && j < len2) {
            if (firstArr[i] > secondArr[j]) {
                a[i + j] = firstArr[i];
                i++;
            }
            else {
                a[i + j] = secondArr[j];
                j++;
            }
        }
    
        while (i < len1) {
            a[i + j] = firstArr[i];
            i++;
        }
    
        while (j < len2) {
            a[i + j] = secondArr[j];
            j++;
        }
    }
    return a;
}