#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key)
{
    if(size==0)
    return false;

    if(arr[0]==key)
    return true;

    else{
        bool remainingPart=linearSearch(arr+1,size-1,key);
        return remainingPart;
    }


}



int main()
{
    int arr[]={3,6,8,4,2};
    int size=5;
    int key=4;

    bool ans=linearSearch(arr,size,key);

    if(ans)
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

    return 0;


}