//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1
// 1 5 10 10 5 1
//pascle Triangle
#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    int NcR(int n,int r){
        //shortcut: run loop till r times:
        int res=1;
        for(int i=0; i<min(r, n-r); i++){
            res= res* (n-i)/ (i+1);
        }
        return res;
    }
    public:
    int printEleAtRC(int r, int c){
        // r-1 combination of c-1 = ans
        cout<< NcR(r-1, c-1);
    }
    //print nth row:
    vector<int> printRow(int r){
        vector<int> ans;
        int res=1;
        ans.push_back(1);
        for(int i=1; i<r; i++){
            res= res*(r-i)/i;
            ans.push_back(res);
        }
        return ans;
    }
    vector<vector<int>> printTriangle(int n){
        vector<vector<int>> tri;
        for(int i=1; i<=n; i++){
            tri.push_back(printRow(i));
        }
        return tri;
    }
};
int main()
{
    test tst;
    vector<int> v= tst.printRow(6);
    // for(auto it: v)cout<<it<<" ";
    vector<vector<int>> t= tst.printTriangle(7);
    for(auto it: t){
        for(auto it2: it) cout<<it2<<" ";
        cout<<endl;
    }
    return 0;
}