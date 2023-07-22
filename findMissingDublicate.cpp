#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    vector<int> dublicateMissing(vector<int> a){
        long long n= a.size();
        long long sn= (n*(n+1))/2;
        long long sn2= (n*(n+1)*(2*n+1))/6;
        long long s=0, s2=0;
        for(int i=0; i<n;i++){
            s+= a[i];
            s2+= (long long)a[i]*(long long)a[i];
        }
        // val1-val2= s-sn, val1^2- val2^2= s2-sn2 
        long long val1= s-sn, val2= s2-sn2;
        long long val3= val2/val1;
        long long dublicate = (val1+val3)/2;
        long long missing= (val3-dublicate);
        return {(int)dublicate, (int)missing};
    }
};
int main()
{
    test tst;
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans =tst.dublicateMissing(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
    return 0;
}