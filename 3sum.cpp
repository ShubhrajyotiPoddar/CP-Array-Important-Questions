// 3 elements of an arr gives sum k
#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    vector<vector<int>> sum3(vector<int> a, int k){
        int n= a.size();
        set<int> hash;
        set<vector<int>> st; 
        for(int i=0; i<n; i++){
            hash.clear();
            for(int j=i+1; j<n;j++){
                int third= k-(a[i]+ a[j]);
                if(hash.find(third)!= hash.end()){
                    vector<int> temp= {a[i], a[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hash.insert(a[j]);
            }
        }
        vector<vector<int>> ans2(st.begin(), st.end());
        return ans2;
    }
    vector<vector<int>> sum3_2(vector<int> a){
        sort(a.begin(), a.end());
        int n= a.size();
        vector<vector<int>> ans;
        for(int i=0; i<n; i++){
            int j= i+1, k= n-1;
            if(i>0 && a[i]== a[i-1]) continue;
            while(j<k){
                int sum= a[i]+a[j]+a[k];
                if(sum>0) k--;
                else if(sum<0) j++;
                else{
                    vector<int> temp= {a[i], a[j], a[k]};
                    ans.push_back(temp);
                    j++; k--;
                    while(j<k && a[j]== a[j-1]) j++;
                    while(j<k && a[k]== a[k+1]) k--;
                }
            }
        }
        return ans;
    }
};
int main()
{
    test tst;
    vector<int> v= {-1 ,-1 ,2 ,0 ,1};
    vector<vector<int>> ans= tst.sum3_2(v);
    for(auto it: ans){
        for(auto it2: it) cout<<it2<<" ";
        cout<<endl;
    }
    return 0;
}