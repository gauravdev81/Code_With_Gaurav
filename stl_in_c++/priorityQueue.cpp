#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int> > mini;


/*
    maxi.push(4);
    maxi.push(2);
    maxi.push(8);
    maxi.push(5);
    maxi.push(3);
    int n = maxi.size();

    cout<<"Is maxi empty?? --> "<<maxi.empty()<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    cout<<"Now Is maxi empty?? --> "<<maxi.empty()<<endl;
*/

    mini.push(5);
    mini.push(3);
    mini.push(7);
    mini.push(2);

    int k = mini.size();

    cout<<"Is maxi empty?? --> "<<mini.empty()<<endl;

    for(int i=0;i<k;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"Now Is maxi empty?? --> "<< mini.empty()<<endl;

}