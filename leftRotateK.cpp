#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    void leftR1(vector<int> &arr, int n){
        int first= arr[0];
        for(int i=0; i<n-1; i++){
            arr[i]= arr[i+1];
        }
        arr[n-1]= first;
    }
    void leftRk(vector<int> &arr, int n, int k){
        k= k%n;
        vector<int> temp;
        for(int i=0; i<k; i++){
            temp.push_back(arr[i]);
        }
        for(int i=k; i<n; i++){
            arr[i-k]= arr[i];
        }
        int ind=0;
        for(int i=n-k; i<n; i++){
            arr[i]= temp[ind++];
        }
    }
    void leftRkOptimal(vector<int> &arr, int n, int k){
        k= k%n;
        reverse(arr.begin(), arr.begin()+k);
        reverse(arr.begin()+k , arr.end());
        reverse(arr.begin(), arr.end());
    }
    //for right rotate point of reverse takes from right i.e rev(arr, arr+(n-k))...
};
int main()
{
    test tst;
    vector<int> vec= {1,2,3,4,5};
    tst.leftRkOptimal(vec, 5,12);
    for(auto it: vec){
        cout<< it<<" ";
    }
    return 0;
}