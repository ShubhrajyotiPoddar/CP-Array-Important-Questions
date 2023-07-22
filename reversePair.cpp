
#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    int count=0;
    void mergeSub(vector<int> &a, int low, int mid, int high){
        int i= low, j= mid+1;
        vector<int> temp;
        for(i=low; i<= mid; i++){
            while(j<= high && a[i]>2* a[j]) j++;
            count+= j- (mid+1);
        }
        i= low, j= mid+1;
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
    void mergeSort(vector<int> &a, int low, int high){
        if(low>= high) return;
        int mid= (low+high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        mergeSub(a, low, mid, high);
    }
    public:
    int noOfInversion(vector<int> &a, int n    ){
        mergeSort(a, 0, n-1);
        return count;
    }
};
int main()
{
    test tst;
    vector<int> a = {4, 1, 2, 3, 1};
    int n = 5;
    int cnt = tst.noOfInversion(a, n);
    cout << "The number of reverse pair is: "
         << cnt << endl;
    return 0;
}