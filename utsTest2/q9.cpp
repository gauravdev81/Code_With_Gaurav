#include<iostream>
using namespace std;

void addprint()
{
    static int s = 1;
    s++;
    cout<<s;
}
int main()
{
    addprint();
    addprint();
    addprint();
    return 0;
}
