#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    int subArr(vector<int> a, int n, int k){
        //brute find all subArr and choose longest

        int maxi=0;
        for(int i=0; i<n; i++){
            int k1= k;
            for(int j=i; j<n; j++){
                k1-=a[j];
                if(k1<0) break;
                if(k1==0){
                    maxi= max(maxi, j-i);
                }
            }
        }
        return maxi+1;
    }
    int  subArrBetter(vector<int> a, int n, int k){ //optimal code for arr containing negetives
        map<long long, int> mpp;
        long long sum=0; int len=0;
        for(int i=0; i<a.size(); i++){
            sum+=a[i];
            if(sum==k){
                len= max(len,i+1);
            }
            // else if(sum>k && !mpp.empty()){  //if consider -ve's no need
                long long rem= sum-k;
                if(mpp.find(rem)!=mpp.end()){
                    len= max(len, i-mpp[rem]);
                }
                // for(auto it: mpp){
                //     if(sum- it.first== k ) len= max(len, i-it.second);
                // }
                
            
            if(mpp.find(sum)==mpp.end()) mpp[sum]=i; 
            // store least size subarr in map such that when calculate rem we get max len sub arr
        }
        return len;
    }
    int subArrOptimal(vector<int> a, int n, int k){
        int sum=a[0], i=0, j=0, len=0;
        while(j<n){
             while(sum>k && i<=j){
                sum-= a[i];
                i++;
             }
             if(sum==k){
                len= max(len, j-i+1);
             }
             //start from here
             j++;
             if(j<n) sum+= a[j];
        }
        return len;
    }
};
int main()
{
    test tst;
    vector<int> arr= {1 ,4 ,3 ,3 ,5 ,5};
    vector<int> arr2= {
0, 2 ,5 ,3 ,3, 4, 4 ,3, 0 ,5, 5, 4, 4, 4, 3 ,2 ,0, 2 ,3 ,1, 3, 0 ,4 ,3, 1, 4 ,5 ,2 ,4 ,3 ,1, 4,5, 0, 3, 4 ,0 
};
vector<int> arr1= {7, 4, -17, -13, -15, 1, 16 ,7, 16, -15 ,-7, -7, -18, 19 ,11, -13, 10 ,-16};
cout<<arr2.size()<<endl;
    cout<<tst.subArrBetter(arr1, arr1.size(), 30);
    return 0;
}