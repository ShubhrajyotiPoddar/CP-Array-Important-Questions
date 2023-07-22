#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    bool twoSum(vector<int> a, int k){
        int n= a.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[i]+a[j]==k) return true;
            }
        }
        return false;
    }
    bool twoSum2(vector<int> a, int k){
        int n= a.size();
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            int rem= k- a[i];
            if(mpp.find(rem)!= mpp.end()) return true;
            else{
                mpp[a[i]]= i;
            }
        }
        return false;
    }
    bool twoSum3(vector<int> a, int k){
        int n= a.size();
        sort(a.begin(), a.end());
        int i=0, j=n-1;
        while(i<j){
            int sum= a[i]+a[j];
            if(sum==k) return true;
            if(sum>k) j--;
            if(sum<k) i++;
        }
        return false;
    }
};
int main()
{
    test tst;
    vector<int> v={2,6,5,8,11};
    cout<<tst.twoSum3(v, 14);
    return 0;
}