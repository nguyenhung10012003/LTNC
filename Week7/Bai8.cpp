int** transpose(int** matrix, int nRows, int nCols) {
    int **matrixt = new int* [nCols];
    for (int i = 0; i < nCols; i++) matrixt[i] = new int [nRows];
    
    for (int i = 0; i < nRows; i++) 
        for (int j = 0; j < nCols; j++) matrixt[j][i] = matrix[i][j];
        
    return matrixt;
}