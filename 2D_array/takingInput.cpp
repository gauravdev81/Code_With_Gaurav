#include<iostream>
using namespace std;

bool search(int arr[][4],int row,int col,int target)
{
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            if(arr[row][col]==target)
            return 1;
        }
    }
    return 0;

}
int main()
{
    int mat[3][4];

    cout<<"Enter the elements : "<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cin>>mat[row][col];
        }
    }

    //printing the array elements

    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<mat[row][col]<<" ";
        }
        cout<<endl;
    }

    //finding sum 
    /*
    int sum=0;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            sum+=mat[row][col];
        }
        
    }

    cout<<"Sum = "<<sum<<endl;
    */

   //seraching element
   int target;
   cout<<"Enter the element to search: "<<endl;
   cin>>target;

   if(search(mat,3,4,target))
   {
    cout<<"Elements found"<<endl;
   }
   else
   {
    cout<<"Element not found"<<endl;
   }
    

   return 0; 
}