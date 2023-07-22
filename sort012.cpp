#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    void sort123(vector<int> &a, int n){
        int low= 0, mid=0, high=n-1;
        while(mid<= high){
            if(a[mid]==0){
                swap(a[mid], a[low]);
                mid++;
                low++;
            }
            else if(a[mid]== 1) mid++;
            else{
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
};
int main()
{
    test tst;
    vector<int> v= {0,1,1,0,1,2,1,2,0,0,1};
    tst.sort123(v, v.size());
    for(auto it: v) cout<<it<<" ";
    return 0;
}