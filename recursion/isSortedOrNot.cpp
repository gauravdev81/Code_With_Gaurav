#include<iostream>
using namespace std;


bool isSortedOrNot(int *arr,int size)
{
    if(size==0 || size==1)  //base case
    return true;

    if(arr[0]>arr[1]) //1 case solve kro, baaki recursion sambhal lega :)
    return false;

    else
    return isSortedOrNot(arr+1,size-1);
    
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

    bool ans = isSortedOrNot(arr,n);
    if(ans)
    cout<<"Array is sorted"<<endl;

    else
    cout<<"Array is not sorted"<<endl;

    return 0;
}
