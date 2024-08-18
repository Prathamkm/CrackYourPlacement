int countSquaresRecursive(vector<vector<int>> &matrix, int i, int j, vector<vector<int>> &memo)
{
    // Base cases: Out of bounds or cell with 0
    if (i < 0 || j < 0 || matrix[i][j] == 0)
        return 0;

    // If already computed, return the value
    if (memo[i][j] != -1)
        return memo[i][j];

    // Recursively find the minimum square ending at the neighboring cells and add 1
    int left = countSquaresRecursive(matrix, i, j - 1, memo);
    int up = countSquaresRecursive(matrix, i - 1, j, memo);
    int diagonal = countSquaresRecursive(matrix, i - 1, j - 1, memo);

    memo[i][j] = min({left, up, diagonal}) + 1;
    return memo[i][j];
}

int countSquares(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> memo(rows, vector<int>(cols, -1)); // Initialize memoization table with -1
    int totalSquares = 0;

    // Calculate the total squares by summing up all the squares ending at each cell
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            totalSquares += countSquaresRecursive(matrix, i, j, memo);
        }
    }

    return totalSquares;
}