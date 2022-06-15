https : // leetcode.com/problems/rotate-image/
        // Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
        // Output: [[7,4,1],[8,5,2],[9,6,3]]
        // firstly transpose asnthen simply reverse each row
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        // for transpose
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)//  for (int j = i+1; j < n; j++) can write this to 
            // ignore swapping of i=j elements (1,1),(2,2),(3,3) etc
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int row = 0; row < n; row++)
        {
            reverse(matrix[row].begin(), matrix[row].end());
        }
    }
};