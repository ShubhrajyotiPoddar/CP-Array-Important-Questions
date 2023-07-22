#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    set<int> divisor(int n){
        set<int> ans;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                ans.insert(i);
                ans.insert(n/i);
            }
        }
        return ans;
    }
};
int main()
{
    test tst;
    set<int> ans= tst.divisor(36);
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;
}