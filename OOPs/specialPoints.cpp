#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
unordered_map<double,int>mp;
int x;
cin>>x;
int y;
cin>>y;
vector<pair<int,int>>v;
for(int i=0;i<n;i++)
{
    int x1;
    cin>>x1;
    int y1;
    cin>>y1;
    v.push_back({x1,y1});
   
}
for(int i=0;i<v.size();i++)
{
    double slope=(double)(v[i].second-y)/(v[i].first-x);
    mp[slope]++;
}
int ans=0;
for(auto it:mp)
{
    ans+=(it.second)*(it.second-1)/2;
}
cout<< ans;
}