class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int totalElement = row * col;
        int sRow = 0, sCol = 0;
        int eRow = row - 1, eCol = col - 1;
        // int count=0;
        while (totalElement)
        {
            for (int i = sCol; i <= eCol && totalElement; i++)
            {
                ans.push_back(matrix[sRow][i]);
                // count++;
                totalElement--;
            }

            sRow++;

            for (int i = sRow; i <= eRow && totalElement; i++)
            {
                ans.push_back(matrix[i][eCol]);
                // count++;
                totalElement--;
            }
            eCol--;

            for (int i = eCol; i >= sCol && totalElement; i--)
            {
                ans.push_back(matrix[eRow][i]);
                // count++;
                totalElement--;
            }

            eRow--;
            for (int i = eRow; i >= sRow && totalElement; i--)
            {
                ans.push_back(matrix[i][sCol]);
                // count++;
                totalElement--;
            }

            sCol++;
        }
        return ans;
    }
};