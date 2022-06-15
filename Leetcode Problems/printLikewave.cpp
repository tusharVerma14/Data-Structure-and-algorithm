/*The sine wave for the matrix:-
1 2
3 4
will be [1, 3, 4, 2].*/
https : // www.codingninjas.com/codestudio/problems/print-like-a-wave_893268
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (col i = 0; i < mCols; col++)
    { // if col is odd
        if (col & 1)
        {
            for (int row = nRows - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            for (int row = 0; row < nRows; row++)
            {
                    ans.push_back(arr[row][col]);
            }
        }
    }
}
