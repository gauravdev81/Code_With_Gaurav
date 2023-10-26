#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if (nums[i] != -1)
            mp[nums[i]] += i;
    }
    int maxi = INT_MIN;
    int res = 0;
    for (auto i : mp)
    {
        if (maxi < i.second)
        {
            maxi = i.second;
            res = i.first;
        }
    }
    cout << res;
}