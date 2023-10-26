#include<iostream>
using namespace std;

void count(int n)
{
    //base condition
    if(n==1)
    {
        cout<<n<<"\t ";
        return;
    }
    count(n-1);
    cout<<n<<"\t ";
    

    
}
int main()
{
    int n;
    cin>>n;
    count(n);
    cout<<endl;

    return 0;
}