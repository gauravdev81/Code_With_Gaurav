#include<iostream>
using namespace std;

class A{
    public:
    int a;
    int b;

    public:
    void operator+(A &obj)
    {
        // int val1= this->a;
        // cout<<"val1 : "<<val1<<endl;
        // int val2=obj.a;
        // cout<<"val2 : "<<val2<<endl;

        // cout<<"Output: val2-val1 = "<<val2-val1<<endl; 

        cout<<"Hello GD"<<endl;
    }

    void operator() ()
    {
        cout<<"Mai bracket hu : "<<this->a<<endl;
    }
};


int main()
{
    A obj1,obj2;
    obj1.a=10;
    obj2.a=13;

    //obj1+obj2;

    obj2();

    return 0;

}