#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;   
    l.push_back(5);
    l.push_front(3);
    l.push_front(4);

    list<int> gaurav(10,25);

    cout<<"printing new list: "<<endl;

    for(int i:gaurav)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    /*
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
     
    cout<<"After erasing"<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list : "<<l.size()<<endl;
    */




}