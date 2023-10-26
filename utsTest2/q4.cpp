#include<iostream>
using namespace std;

int main()
{
    int const p=5;
    //the below statement causes error as : const can't be updated
    //cout<< ++p;
    return 0;
}