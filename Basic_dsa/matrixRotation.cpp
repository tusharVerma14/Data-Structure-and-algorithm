#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int> > rotateMatrix(vector<vector<int> > &matrix){
        int rows = matrix.size();
        if (rows == 0) return {{}};
        int cols = matrix[0].size();
        vector<vector<int>> r(cols, vector<int>(rows));        
        for (int i = 0; i < rows; ++ i) {
            for (int j = 0; j < cols; ++ j) {
                r[j][i] = matrix[i][j];
            }
        }  

        for(int i=0;i<r.size();i++){
            swap(r[i][0],r[i][r[0].size()-1]);
        }
        return r;
}

int main()
{
     vector<vector<int>> matrix={
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
    };
     vector<vector<int>> ans=rotateMatrix(matrix);
    //  for(int row=0;row<matrix.size();row++){
    // for(int col=0;col<matrix[0].size();col++){
    //     cout<<matrix[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int row=0;row<ans.size();row++){
    for(int col=0;col<ans[0].size();col++){
        cout<<ans[row][col]<<" ";
        }
        cout<<endl;
    }
    
 return 0;
}