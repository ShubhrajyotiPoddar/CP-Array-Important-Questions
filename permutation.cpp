#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    void comb(vector<int> a, vector<int> &ds, vector<int> &freq,vector<vector<int>> &ans, int n){ //loop push
        if(ds.size()==n){
                ans.push_back(ds);
                return;
            }
        for(int i=0; i<n; i++){
            if(freq[i]==0){
                freq[i]=1;
                ds.push_back(a[i]);
                comb(a, ds, freq, ans, n);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    void comb2(vector<int> &a, int n,int ind, vector<vector<int>> &ans){
        if(ind== n){
            ans.push_back(a);
            return;
        }
        for(int i=ind; i<n; i++){
            swap(a[ind], a[i]);
            comb2(a, n, ind+1, ans);
            swap(a[i], a[ind]);
        }
    }
    public:
    vector<vector<int>> per(vector<int> a, int n){
        vector<int> ds, freq(n,0);
        vector<vector<int>> ans;
        comb(a, ds, freq, ans, n);
        return ans;
    }
    vector<vector<int>> per2(vector<int> a, int n){
        vector<vector<int>> ans;
        int ind=0;
        comb2(a, n, ind, ans);
        return ans;
    }
};
int main()
{
    test tst;
    vector<int> v={5,3,1};
    vector<vector<int>> ans;
    ans=tst.per2(v, 3);
    for(auto it: ans){
        for(auto it2: it){
            cout<<it2<<" ";
        }
        cout<<endl;
    }
    return 0;
}