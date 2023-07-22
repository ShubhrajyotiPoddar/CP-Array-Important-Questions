// element occurance should be greater than flooro of n/3
// at max no of element for ans = 2 
#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    vector<int> majorityElement(vector<int> v) {
	vector<int> ans;
    int n= v.size();
	int cnt1=0, cnt2=0, ele1= INT_MIN, ele2= INT_MIN;
	for(int i=0; i<n; i++){
        if(cnt1==0 &&  ele2!= v[i] ){
            cnt1++;
            ele1= v[i];
        }
        else if(cnt2==0 && ele1!= v[i]){
            cnt2++;
            ele2= v[i];
        }
        else if(v[i]== ele1) cnt1++;
        else if(v[i]== ele2) cnt2++;
        else{
            cnt1--; cnt2--;
        }
    }
    
    cnt1=0; cnt2=0;
    for(int i=0; i<n; i++){
        if(v[i]== ele1) cnt1++;
        if(v[i]== ele2) cnt2++;
    }
    int mini = int(n / 3) + 1;
    if(cnt1>= mini) ans.push_back(ele1);
    if(cnt2>= mini) ans.push_back(ele2);
    sort(ans.begin(), ans.end());
    return ans;
}
};
int main()
{
    test tst;
    
    return 0;
}