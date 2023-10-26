#include<iostream>
using namespace std;

void print(char * a)
{
    cout<< a << endl;
}
int main()
{
    const char *a = "Hello world";
    print(const_cast<char*> (a));

    return 0;

}