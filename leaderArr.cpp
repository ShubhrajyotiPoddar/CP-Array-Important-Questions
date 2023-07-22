#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    vector<int> leader(vector<int> a,int n){
        int maxi=a[n-1];
        vector<int> ans;
        ans.push_back(a[n-1]);
        for(int i=n-2;i>=0; i--){
            if(a[i]>maxi){
                maxi= a[i];
                ans.push_back(a[i]);
            }
        }
        return ans;
    }
};
int main()
{
    test tst;
    
    return 0;
}