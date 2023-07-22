#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    void mergeSub(vector<int> &a, int low, int mid, int high){
        int i= low, j= mid+1;
        vector<int> temp;
        while(i<=mid && j<= high){
            if(a[i]<= a[j]){
                temp.push_back(a[i]);
                i++;
            }
            else{
                temp.push_back(a[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(a[i]);
            i++;
        }
        while(j<=high){
            temp.push_back(a[j]);
            j++;
        }
        for(int i=0; i<temp.size(); i++){
            a[low+i] = temp[i];
        }
    }
    public:
    void mergeSort(vector<int> &a, int low, int high){
        if(low>= high) return;
        int mid= (low+high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        mergeSub(a, low, mid, high);
    }
};
int main()
{
    test tst;
    vector<int> v= {3,1,2,4,1,5,6,2,4};
    tst.mergeSort(v, 0, v.size()-1);
    for(auto it: v) cout<<it<<" ";
    return 0;
}