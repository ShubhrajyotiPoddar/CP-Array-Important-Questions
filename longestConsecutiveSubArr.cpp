#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    int lconsSubarr(vector<int> a, int n){
        sort(a.begin(), a.end());
        int lstSmol= INT_MIN, longest=0, mlen=0;
        for(int i=0; i<n; i++){
            
            if(lstSmol==a[i]);
            else if(lstSmol== a[i]-1){
                longest+=1;
                lstSmol= a[i];
            }
            else if(lstSmol!= a[i]-1){
                longest=1;
                lstSmol=a[i];
            }
            mlen= max(mlen, longest);            
        }
        return mlen;
    }
     int lconsSubarr2(vector<int> a, int n){
        unordered_set<int> st;
        for(int i=0; i<n; i++){
            st.insert(a[i]);
        }
        int longest=0, maxLen=0;
        for(auto it: st){
            if(st.find(it-1)!= st.end()) continue;
            if(st.find(it-1)== st.end()){
                longest=1;
                int ele= it;
                while(st.find(ele+1)!= st.end()){
                    longest++;
                    ele++;
                }
                maxLen= max(maxLen, longest);
            }
        }
        return maxLen;
     }
};
int main()
{
    test tst;
    vector<int> v{8,3,2,1,103,100,102,101,101};
    cout<<tst.lconsSubarr2(v,9);
    return 0;
}