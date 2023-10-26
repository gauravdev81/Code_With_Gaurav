#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int len;

 int f(vector<int>& arr, int i, int sum)
    {
        // base case

        if(sum == 0)
        {
            return 0;
        }

        if(i >= len|| sum < 0)
        {
            return INT_MAX - 1000;
        }

        // if already calculated

        // if(dp[i][sum] != -1)
        // {
        //     return dp[i][sum];
        // }

        // at each ith element we have two options either include or exclude

        int mini = INT_MAX;

        // inclusion part

        if(arr[i] <= sum)
        {
            mini = min(mini, 1 + f(arr, i, sum - arr[i]));
        }

        // exclusion part

        mini = min(mini, f(arr, i + 1, sum));

        // store the res in dp

        return  mini;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        len=nums.size();
        return f(nums,0,target);
    }

int main() {
  int n;
  cin>>n;
  queue<int>q;
  q.push(4);
  q.push(5);
  vector<int>v;

  while(q.front()<=n)
  {
      int x=q.front();
      q.pop();
      v.push_back(x);
      
      int y=x*10+4;
      int z=x*10+5;
      
      q.push(y);
      q.push(z);
     
      
  }
  for(auto it:v)
  cout<<it<<" ";
  cout<<endl;
  cout<<findTargetSumWays(v,n)<<endl;
  
  
}