#include <bits/stdc++.h>
using namespace std;
class test
{
private:
public:
    vector<int> intersectionSArr(vector<int> arr1, vector<int> arr2)
    {
        vector<int> ans;
        int i = 0, j = 0;
        while (i < arr1.size() && j < arr2.size())
        {
            if (arr1[i] < arr2[j])
                i++;
            else if(arr1[i]> arr2[j])
                j++;
            else{
                ans.push_back(arr1[i]);
                i++; j++;
                //ans can contain dublicates!!
            }
        }
        return ans;
    }
};
int main()
{
    test tst;
    vector<int> vec1 = {1, 2, 2, 3, 5};
    vector<int> vec2 = {2, 2, 3, 4};
    vector<int> ans = tst.intersectionSArr(vec1, vec2);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}