#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
	int n= mat.size(), m= mat[0].size();
	vector<vector<int>> temp(m, vector<int>(n,0));
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			temp[i][j]= mat[m-1-j][i];
		}
	}
	for(int i=0;i<n; i++){
		for(int j=0; j<m; j++){
			mat[i][j] = temp[i][j];
		}
	}
    }
    void rotateMatrix2(vector<vector<int>> &mat){
	// Write your code here.
	int n= mat.size();
	for(int i=0;i<n; i++){
		for(int j=0; j<i; j++){
			if(i!=j){
				swap(mat[i][j], mat[j][i]);
			}
		}
	}
	for(int i=0; i<n; i++){
		reverse(mat[i].begin(), mat[i].end());
	}
}
};
int main()
{
    test tst;
    
    return 0;
}