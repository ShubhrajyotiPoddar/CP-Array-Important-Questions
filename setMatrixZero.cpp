#include <bits/stdc++.h>
using namespace std;
class test
{
private:
    void markRow(vector<vector<int>> &mat, int i, int m)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] != 0)
                mat[i][j] = -1;
        }
    }
    void markCol(vector<vector<int>> &mat, int j, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (mat[i][j] != 0)
                mat[i][j] = -1;
        }
    }

public:
    void setMatrix(vector<vector<int>> &mat, int n, int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 0)
                {
                    markRow(mat, i, m);
                    markCol(mat, j, n);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                if (mat[i][j] == -1)
                    mat[i][j] = 0;
        }
    }
    void setMatrix2(vector<vector<int>> &mat, int n, int m)
    {
        vector<int> row(n, 0), col(m, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 0)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (row[i] == 1 || col[j] == 1)
                    mat[i][j] = 0;
            }
        }
    }
    void setMatrix3(vector<vector<int>> &matrix, int n, int m)
    {
        int col0 = 1;
    // step 1: Traverse the matrix and
    // mark 1st row & col accordingly:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                // mark i-th row:
                matrix[i][0] = 0;

                // mark j-th column:
                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] != 0) {
                // check for col & row:
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    //step 3: Finally mark the 1st col & then 1st row:
    if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }
    }
    void setMatrix4(vector<vector<int>> &mat, int n, int m) //.. dont know where the upper and lower func are different
    {
        int col0 = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==0){
                    mat[i][0]=0;
                    if(j== 0) col0=0; //0th column represented by col0..
                    else mat[0][j]=0;
                }
            }
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(mat[i][j]!=0)
                if(mat[i][0]==0 || mat[0][j]==0) mat[i][j]=0;
            }
        }
        if(mat[0][0]==0){
            for(int j=0; j<m; j++)
                mat[0][j]=0;
        }
        if(col0==0){
            for(int i=1; i<n; i++){
                mat[i][0]=0;
            }
        }
    }
};
int main()
{
    test tst;
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    tst.setMatrix4(matrix, n, m);

    cout << "The Final matrix is:"<<endl;
    for (auto it : matrix) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout <<endl;
    }
    return 0;
}