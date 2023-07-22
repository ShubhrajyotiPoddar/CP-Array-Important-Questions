#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    int xorK(vector<int> a, int k){
        int xor1=0, maxi=0, n= a.size();
        map<int, int> hash;
        for(int i=0; i<n; i++){
            xor1^= a[i];
            if(xor1==k){
                maxi++;
            }
            int rem= xor1^k;
            if(hash.find(rem)!= hash.end()){
                maxi+= hash[rem];
            }
             hash[xor1]++;
        }
        return maxi;
    }
};
int main()
{
    test tst;
    vector<int> v={4,2,2,6,4};
    cout<<tst.xorK(v,6);
    return 0;
}