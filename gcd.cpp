#include<bits/stdc++.h>
using namespace std;
class test{
    private:
        int lop(int x, int y){
            if(x==0) return y;
            else return lop(y%x, x);  
        }
    public:
    void gcd(int a, int b){
        int x= min(a,b), y= max(a,b);
        cout<<lop(x,y);
    }
    void gcd2(int a, int b){
        //gcd(large, small)== gcd(large-small, small)
        while(a>0 && b>0){
            if(a>b) a= a%b;
            else b= b%a;
        }
        if(a!=0) cout<<a;
        else cout<<b;
    }
};
int main()
{
    test tst;
    tst.gcd2(49,7);
    return 0;
}