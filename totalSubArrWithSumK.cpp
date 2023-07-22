#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    int totSubArrK(vector<int> a, int n, int k){
        map<int, int> mpp;
        int sum=0, sub=0;
        for(int i=0;i<n;i++){
            sum+= a[i];
            if(sum== k) sub++;
            int rem= sum-k;
            if(mpp.find(rem)!= mpp.end()) sub+= mpp[rem];
            mpp[sum]++;
        }
        return sub;
    }
    int totSubArrK2(vector<int> a, int n, int k){
        int sum=0, sub=0;
        for(int i=0; i<n; i++){
            sum=0;
            for(int j=i; j<n; j++){
                sum+=a[j];
                if(sum==k) sub++;
            }
        }
        return sub;
    }
};
int main()
{
    test tst;
    vector<int> v={1,2,3,-3,1,1,1,4,2,-3};
    cout<<tst.totSubArrK(v, v.size(), 3);
    return 0;
}