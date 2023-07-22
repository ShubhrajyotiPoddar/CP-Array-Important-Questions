#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    void nexPer(vector<int> &v, int n){ //finding index 1 where bp+1 to end is sorted in rev
        int bp=-1;
        for(int i=n-1; i>=1; i--){
            if(v[i-1]<v[i]){
                bp=i-1;
                break;
            }
        }
        if(bp==-1){ //if last ele
            reverse(v.begin(), v.end());
        }
        for(int i=n-1; i>bp; i--){ //
            if(v[i]>v[bp]){
                swap(v[bp], v[i]);
                break;
            }
        }
        reverse(v.begin()+bp+1, v.end());
    }
};
int main()
{
    test tst;
    vector<int> v= {2,1,4,3,0};
    tst.nexPer(v, 5);
    for(auto it: v) cout<<it<<" ";
    return 0;
}