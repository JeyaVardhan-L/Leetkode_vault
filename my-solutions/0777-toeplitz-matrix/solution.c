bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize) {
    int rows = matrixSize;
    int cols = matrixColSize[0];
    for (int r = 1; r < rows; r++) {
        for (int c = 1; c < cols; c++) {
            if (matrix[r][c] != matrix[r-1][c-1]) {
                return false;
            }
            
        }
    }
    return true; 
}
