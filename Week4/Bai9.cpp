void sort(float array[], int size, bool isAscending) {
    float temp[1000];
    for (int i = 0; i < size; i++) temp[i] = array[i];
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (temp[i] > temp[j]) swap(temp[i],temp[j]);
        }
    }
    
    if (isAscending) 
        for (int i = 0; i < size; i++) {
            array[i] = temp[i];
        }
    else for (int i = 0;i < size; i++) array[i] = temp[size-1-i];
}