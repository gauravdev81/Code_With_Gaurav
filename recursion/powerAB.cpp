#include<iostream>
using namespace std;

int power(int a,int b)
{
    if(b==0)
    return 1;

    else if(b==1)
    return a;

    else{
        int ans = power(a,b/2);  

        if(b%2==0)   //power even
        {
            return ans*ans;
        }
        else{  
            return a*ans*ans;    

        }
    }
}
int main()
{
    int a,b;
    cout<<"Enter a and b "<<endl;
    cin>>a>>b;

    int ans = power(a,b);

    cout<<"Ans: "<<ans<<endl;

    return 0;
}