#include<iostream>
using namespace std;


int arraySum(int *arr,int size)
{
    if(size==0)  //base case
    return 0;

    if(size==1) //1 case solve kro, baaki recursion sambhal lega :)
    {
       return arr[0];
    }
    
    int ans = arr[0] + arraySum(arr+1,size-1);
    return ans;
    
}
int main()
{
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array: "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans = arraySum(arr,n);
    cout<<"sum = "<<ans<<endl;

    return 0;
}
