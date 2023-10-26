// Row wise and column wise, both present

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[3][4];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    vector<int> v;

    // row wise sum
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        v.push_back(sum);
    }
    
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        //cout << "Sum of all elements of " << i+1 << "th row: " << v[i] << endl;
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int maxRow=0;
    int maxElement=0;
    int i;
    
    for(i = 0; i < n; i++)
    {
        if(v[i]>maxElement)
        {
            maxElement=v[i];
            maxRow=i+1;
        }

    }
    cout << "Maximum row : "<<maxRow<<endl;
    

    // column wise sum
    /*
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        v.push_back(sum);
    }
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        cout << "Sum: " <<v[i] << endl;
    }
    cout << endl;
    */
}