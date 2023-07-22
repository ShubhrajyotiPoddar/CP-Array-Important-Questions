#include <bits/stdc++.h>
using namespace std;
class test
{
private:
public:
    int stock(vector<int> a, int n)
    {
        int buy = a[0], prof = 0;
        for (int i = 1; i < n; i++)
        {
            prof = max(prof, a[i] - buy);
            buy = min(buy, a[i]);
        }
        return prof;
    }
    vector<int> alter(vector<int> a, int n)
    {
        int j = 0, k = 0;
        vector<int> ans(n, 0);
        ans[0] = a[0];
        if (a[0] > 0)
        {
            j = 2;
            k = 1;
        }
        else
        {
            k = 2;
            j = 1;
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] > 0)
            {
                ans[j] = a[i];
                j += 2;
            }
            else
            {
                ans[k] = a[i];
                k += 2;
            }
        }
        return ans;
    }
    vector<int> alter2(vector<int> a, int n) // when no of positives!= no of negetives
    {
        vector<int> pos, neg, ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
                pos.push_back(a[i]);
            else
                neg.push_back(a[i]);
        }
        int mn = min(pos.size(), neg.size());
        for (int i = 0; i < mn; i++)
        {
            ans[2 * i] = pos[i];
            ans[2 * i + 1] = neg[i];
        }
        int f= 2*mn;
        for (int i = mn; i < max(pos.size(), neg.size()); i++)
        {
            if (pos[mn])
                ans[f] = pos[i];
            else
                ans[f] = neg[i];
            f++;
        }
        return ans;
    }
};
int main()
{
    test tst;
    vector<int> v = {1, 2, -3, -1, -2, 3};
    vector<int> ans = tst.alter(v, v.size());
    for (auto it : ans)
        cout << it << " ";
    return 0;
}