#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    // element occurances should be greater than floor of n/2
    public:
    int majority(vector<int> a, int n){
        int count=0, ele= a[0];
        for(int i=0; i<n; i++){
            if(count==0){
                ele= a[i];
                count++;
            }
            else if(a[i]!= ele) count--;
            else if(a[i]== ele) count++;
        }
        count=0;
        for(int i=0; i< n; i++){
            if(a[i]==ele) count++;
        }
        if(count>n/2) return ele;
        return -1;
    }
};
int main()
{
    test tst;
    
    return 0;
}