#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    
    public:
    int missYou(vector<int> a, int n){
        int sum= n*(n+1)/2, aSum=0;
        for(int i=0; i<n-1;i++){
            aSum= aSum+ a[i];
        }
        return sum-aSum;
    }
    int missYouX(vector<int> a, int n){
        int xor1= 0, xor2=0;
        for(int i=0; i<n-1; i++){
            xor1= xor1 ^ a[i];
            xor2= xor2 ^ (i+1);
        }
        xor2= xor2 ^ n;
        return xor1 ^ xor2;
    }
    int numberWhichAppearsOnceRestTwice(vector<int> a, int n){
        unordered_map<int, int> mpp;
        for(int i=0; i<n; i++){
            mpp[a[i]]++;
        }
        for(auto it: mpp){
            if(it.second== 1) return it.first;
        }
    }
    int numberWhichAppearsOnceRestTwice2(vector<int> a, int n){
        int xor1=0; 
        for(int i=0; i<n; i++){
            xor1+= a[i];
        }
        return xor1;
    }
};
int main()
{
    test tst;
    vector<int> a= {1,1,0,1};
    cout<<tst.numberWhichAppearsOnceRestTwice2(a,4);
    return 0;
}