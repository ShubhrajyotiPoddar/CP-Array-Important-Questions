#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    void swapy2(int arr1[], int arr2[], int a, int b){
        if(arr1[a]> arr2[b]){
            swap(arr1[a], arr2[b]);
        }
    }
    public:
    void mergeArr(int arr1[], int arr2[], int n, int m){
        int a= n-1, b= 0;
        while (arr1[a]> arr2[b] && a>0 && b<m)
        {
            swap(arr1[a],arr2[b]);
            a--; b++;
        }
        sort(arr1, arr1+n);
        sort(arr2, arr2+m);
    }
    void optimal2(int arr1[], int arr2[], int n, int m){
        int len= m+n;
        int gap= len/2+ len%2;
        while(gap>0){
            int left=0, right= left+gap;
            while(right<len){
                //left in arr1 and right in arr2
                if(left<n && right>= n){
                    swapy2(arr1, arr2, left, right-n);
                }
                // both in arr1
                if(right<n){
                    swapy2(arr1, arr1, left, right);
                }
                // both in arr2
                if(left>=n){
                    swapy2(arr2, arr2, left-n, right-n);
                }
                left++; right++;
            }
        if(gap==1) break;
        gap= ceil(gap/2);
        }
    }
};
int main()
{
    test tst;
    int arr1[] = {1, 4, 8, 10};
    int arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    tst.optimal2(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}