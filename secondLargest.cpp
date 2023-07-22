#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    int secondL(vector<int> &arr, int n){
        int largest= arr[0], sLargest= -1;
        for(int i=1; i<n; i++){
            if(arr[i]> largest){
                  sLargest= largest;
                  largest= arr[i];
            }
            else if(arr[i]< largest && arr[i]> sLargest){
                sLargest= arr[i];
            }
        }
        return sLargest;
    }
        int secondS(vector<int> &arr, int n){
            int smallest= arr[0], sSmallest= INT_MIN;
            for(int i=1; i<n; i++){
                if(arr[i]<smallest){
                    sSmallest= smallest;
                    smallest= arr[i];
                }
                else if(arr[i]> smallest && arr[i]< sSmallest){
                    sSmallest= arr[i];
                }
            }
            return sSmallest;
        }
    public:
    vector<int> second(vector<int> arr, int n){
        int sLargest= secondL(arr, n);
        int sSmallest=secondS(arr, n);
        return {sLargest, sSmallest};
    }
};
int main()
{
    test tst;
    
    return 0;
}