#include<iostream>
using namespace std;

int power(int n)
{
    //base condition
    if(n==0)
    return 1;

    return 2*power(n-1);     // recursive rel -> f(n) = 2 * f(n-1)
}
int main()
{
    int n;
    cin>>n;
    int result = power(n);
    cout<<result<<endl;

    return 0;
}