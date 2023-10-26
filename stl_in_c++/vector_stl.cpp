#include<iostream>
#include<vector>     
using namespace std;
int main()
{
    vector<int> v;
    // checking capacity
    // cout<<"initial capacity : "<< v.capacity()<<endl;
    // cout<<"initial size : "<< v.size()<<endl;

    v.push_back(2);

    // cout<<"capacity after pushing 2: "<< v.capacity()<<endl;
    // cout<<"size after pushing 2 : "<< v.size()<<endl;


    v.push_back(5);

    // cout<<"capacity after pushing 5: "<< v.capacity()<<endl;
    // cout<<"size after pushing 5 : "<< v.size()<<endl;

    v.push_back(6);

    // cout<<"capacity after pushing 6: "<< v.capacity()<<endl;
    // cout<<"size after pushing 6 : "<< v.size()<<endl;

    v.push_back(8);

    // cout<<"capacity after pushing 8: "<< v.capacity()<<endl;
    // cout<<"size after pushing 8 : "<< v.size()<<endl;

    v.push_back(10);

    // cout<<"capacity after pushing 10: "<< v.capacity()<<endl;
    // cout<<"size after pushing 10 : "<< v.size()<<endl;

    // printing elements of vector

    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //popping from back
    /*

    v.pop_back();
    cout<<"After popping 10 :"<<endl;

    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"capacity after popping 10: "<< v.capacity()<<endl;
    cout<<"size after popping 10 : "<< v.size()<<endl;

    v.pop_back();

    cout<<"After popping 8 :"<<endl;

    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"capacity after popping 8: "<< v.capacity()<<endl;
    cout<<"size after popping 8 : "<< v.size()<<endl;

    */

   // .front() and .back() and .at(index) function

   cout<<"Element at front -> "<<v.front()<<endl;
   cout<<"Element at back -> "<<v.back()<<endl;
   cout<<"Element at 4th index -> "<<v.at(2)<<endl;

   //creating another vector and copying elements of existing vector in this new vector

   vector<int> temp(v);

   cout<<"printing temp vector"<<endl;

   for(int k:temp)
   {
    cout<<k<<" ";
   }
   cout<<endl;






    













    return 0;
}