#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> myStack;
    myStack.push("gaurav");
    myStack.push("dev");
    myStack.push("raj");

    cout<<"top element: "<<myStack.top()<< endl;
    myStack.pop();
    cout<<"After popping "<< endl;
    
    cout<<"top element: "<<myStack.top()<< endl;
    cout<<"size: "<<myStack.size()<< endl;
    

    
}