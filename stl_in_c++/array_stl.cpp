// array stl is also just like static array, so we generally tend to not use array stl :(


#include<iostream>
#include<array>     // include this header file to use array stl
using namespace std;
int main()
{
    array<int,5> arr = {2,5,3,6,8};


    int size = arr.size();
    cout<< "size of array : "<<size<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //few inbuilt array functions

    cout<<"Element at 3rd index is: "<<arr.at(3)<<endl;
    cout<<"Empty or not : "<<arr.empty()<<endl;
    cout<<"First element : "<<arr.front()<<endl;
    cout<<"Last element : "<<arr.back()<<endl;
    return 0;
}