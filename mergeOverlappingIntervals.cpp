#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int n= arr.size();
        vector<int> temp= arr[0];
        for(int i=1; i<n; i++){
            if(arr[i][0]>= temp[0] && arr[i][0]<= temp[1]){
                temp[1]= max(temp[1], arr[i][1]);
            }
            else{
                ans.push_back(temp);
                temp.clear();
                temp= arr[i];
            }
        }
        if(!temp.empty()) ans.push_back(temp);
        return ans;
    }
};
int main()
{
    test tst;
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = tst.mergeOverlappingIntervals(arr);
    cout << "The merged intervals are: " << "\n";
    for (auto it : ans) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    return 0;
}