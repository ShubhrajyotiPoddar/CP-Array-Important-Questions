#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    pair<int, int> subArrSum(vector<int> a, int n){
        int start=-1, endS=-1, sum=0, maxi=a[0];
        for(int i=0; i<n;i++){
            if(sum==0) start=i;
            sum+= a[i];
            if(maxi<sum){
                maxi= sum;
                endS= i;
            }
            if(sum<0) sum=0;
        }
        return {start, endS};
    }
};
int main()
{
    test tst;
    vector<int> v= {1, 2 ,7 ,-4, 3, 2, -10, 9 ,1};
    auto it= tst.subArrSum(v, 9);
    cout<<it.first<<" "<<it.second;
    return 0;
}