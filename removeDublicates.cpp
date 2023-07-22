#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    vector<int> removeDublicates(vector<int> &arr, int n){
        int modifier= 0;
        int checker;
        for(int i=1; i<n; i++){
            checker= i;
            if( arr[checker]!= arr[modifier]){
                modifier++;
                arr[modifier]= arr[checker];
            } 
        }
        // cout<<modifier+1<<endl;
        return arr;
    }
};
int main()
{
    test tst;
    vector<int> vec = {1, 2, 2, 3, 3, 3};
    tst.removeDublicates(vec, 6);
    for(auto it: vec){
        cout<<it<<" ";
    }
    return 0;
}