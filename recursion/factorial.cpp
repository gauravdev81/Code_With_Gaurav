#include<iostream>
using namespace std;

int fact(int n)
{
    //base condition
    if(n==0)
    return 1;

    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    int result = fact(n);
    cout<<result<<endl;

    return 0;
}