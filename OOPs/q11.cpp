#include <bits/stdc++.h>
using namespace std;

class Base {
    public:
    Base(){
        cout<<"Base called"<<endl;
    }
};

class Base1 {
    public:
    Base1(){
        cout<<"Base1 called"<<endl;
    }
};

class Derived : public Base, public Base1 {
    public:
    Derived(){
        cout<<"Derived called"<<endl;
    }
};

int main()
{
    Derived d;
    return 0;
}