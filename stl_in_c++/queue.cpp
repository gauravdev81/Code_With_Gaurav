#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("gaurav");
    q.push("dev");
    q.push("raj");

    cout<<"Front element: "<<q.front()<<endl;
    q.pop();
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"size: "<<q.size()<<endl;



}