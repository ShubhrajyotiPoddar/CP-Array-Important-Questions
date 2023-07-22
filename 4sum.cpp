#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    vector<vector<int>> fourSum(vector<int> a, int t){
        set<int> hash;
        set<vector<int>> stds;
        int n= a.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                hash.clear();
                for(int k=j+1; k<n; k++){
                    hash.insert(a[k]);
                    int rem= t-(a[i]+a[j]+a[k]);
                    if(hash.find(rem)!= hash.end()){
                        vector<int> temp= {a[i], a[j], a[k], rem};
                        sort(temp.begin(), temp.end());
                        stds.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>> ans(stds.begin(), stds.end());
        return ans;
    }
    vector<vector<int>> fourSum2Pointer(vector<int> a, int t){
        sort(a.begin(), a.end());
        int n= a.size();
        vector<vector<int>> ans;
        for(int i=0; i<n; i++){
            if(i>0 && a[i]== a[i-1]) continue;
            for(int j=i+1; j<n; j++){
                if(j>i+1 && a[j]== a[j-1]) continue;
                int k= j+1, l= n-1;
                while(k<l){
                    int sum= a[i]+a[j]+a[k]+ a[l];
                    if(sum> t) l--;
                    else if(sum< t)  k++;
                    else{
                        vector<int> temp= {a[i],a[j],a[k], a[l]};
                        ans.push_back(temp);
                        k++; l--;
                        while(k<l && a[k]== a[k-1]) k++;
                        while(k<l && a[l]== a[l+1]) l--;
                    }
                }
            }
        }
        return ans;
    }
};
int main()
{
    test tst;
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector<vector<int>> ans = tst.fourSum2Pointer(nums, target);
    cout << "The quadruplets are: \n";
    for (auto it : ans) {
        cout << "[";
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}