#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreater(vector<int> test)
{
    stack<int> s;
    vector<int> ans1;
    int n= test.size();
    s.push(-1);
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty() && s.top()!=-1 && s.top()<=test[i])`
        {
            s.pop();

        }
        ans1.push_back(s.top());
        s.push(test[i]);

    }
    //reversing the ans1 vector

    int i=0;
    int j= ans1.size()-1;

    while(i<j)
    {
        swap(ans1[i++],ans1[j--]);
    }

    return ans1;


}
int main()
{
    vector<int> test;
    // {3,5,4,7,8}
    test.push_back(3);
    test.push_back(-5);
    test.push_back(11);
    test.push_back(7);
    test.push_back(8);

    vector<int> ans;
    ans = nextGreater(test);
    cout<<"The next greater elements are:"<<endl;

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}