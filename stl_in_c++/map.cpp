#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="Dev";
    m[9]="Gaurav";
    m[5]="Alex";
    m[3]="David";

    m.insert({7,"Alia"});

    cout<<"Before erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 8--> "<<m.count(8)<<endl;

    m.erase(5);

    cout<<"After erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    auto it=m.find(3);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }

    
    
}