#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    void zeroToRight(vector<int> &arr, int n){
        int ind0=-1;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                ind0= i;
                break;
            }
        }
        if(ind0==-1) return;
        for(int i=ind0+1; i<n; i++){
            if(arr[i]!=0){
                swap(arr[i], arr[ind0]);
                ind0++;
            }
        }
    }
};
int main()
{
    test tst;
    vector<int> vec= {1,0,3,0,5};
    tst.zeroToRight(vec, 5);
    for(auto it: vec){
        cout<< it<<" ";
    }
    return 0;
}