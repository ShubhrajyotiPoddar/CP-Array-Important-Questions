#include <bits/stdc++.h>
using namespace std;
class test
{
private:
public:
void pattern1(int n){
    for(int i= n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i= 0; i<n; i++){
        for(int j=n-i-1; j>=0; j--){
            cout<<"  ";
        }
        for(int k=0; k<2*i+1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i= n-1; i>=0; i--){
        for(int j=n-i-1; j>=0; j--){
            cout<<"  ";
        }
        for(int k=0; k<2*i+1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i= 0; i<n; i++){
        for(int j=n-i-1; j>=0; j--){
            cout<<"  ";
        }
        for(int k=0; k<2*i+1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i= n-2; i>=0; i--){
        for(int j=n-i-1; j>=0; j--){
            cout<<"  ";
        }
        for(int k=0; k<2*i+1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=0; i<2*n-1; i++){
        if(i<n){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }}
        else{
            for(int j=1; j<2*n-i; j++){
            cout<<"* ";
        }}
        cout<<endl;
    }
}
void pattern6(int n){
    int start =1;
    for(int i=0; i<n; i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0; j<=i; j++){
            cout<<start;
            start= 1- start;
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1;
        }
        for(int k= 2*(n-i-1); k>=1; k--){
            cout<<" ";
        }
        for(int l=i+1; l>=1; l--){
            cout<<l;
        }
        cout<<endl;
    }
}
void pattern8(int n){
        int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}
void pattern9(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<= 'A'+i; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern10(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i-1; j++){
            cout<<" ";
        }
        char ch='A';
        int br= i;
        for(int k=0; k<2*i+1;k++){
            cout<<ch;
            if(k<br) ch++;
            else ch--;
        }
        cout<<endl;
    }
}
void pattern11(int n){
    int n1= 2*n-1;
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top= i;
            int left=j;
            int bottom= n1-i-1;
            int right= n1-j-1;
            int dig= min(min(left, right), min(top, bottom));
            cout<<n-dig;
        }
        cout<<endl;
    }
}
};
int main()
{
    test tst;
    tst.pattern11(4);
    return 0;
}