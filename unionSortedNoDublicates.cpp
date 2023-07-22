#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    vector<int> noDub(vector<int> arr1, vector<int> arr2){
        vector<int> ans;
        int ind1=0, ind2=0;
        while(ind1<arr1.size() && ind2<arr2.size()){
            if(arr1[ind1]<= arr2[ind2]){
                if(ans.size()==0 || ans.back()!= arr1[ind1]){
                    ans.push_back(arr1[ind1]);
                }
                ind1++;
            }
            if(arr1[ind1]> arr2[ind2]){
                if(ans.size()==0 || ans.back()!= arr2[ind2]){
                    ans.push_back(arr2[ind2]);
                }
                ind2++;
            }
        }
        while(ind1<arr1.size()){
            if(ans.size()==0 || ans.back()!= arr1[ind1]){
                    ans.push_back(arr1[ind1]);
                }
                ind1++;
        }
        while(ind2<arr2.size()){
            if(ans.size()==0 || ans.back()!= arr2[ind2]){
                    ans.push_back(arr2[ind2]);
                }
            ind2++;
        }
        return ans;
    }
};
int main()
{
    test tst;
    vector<int> vec1= {1,2,2,3,5};
    vector<int> vec2= {2,3,4};
    vector<int> ans=tst.noDub(vec1, vec2);
    for(auto it: ans){
        cout<< it<<" ";
    }
    return 0;
}