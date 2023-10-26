//2 class has same named function / data member
// Using Scope Resolution Operator ( :: ) we can remove the ambiguity

#include<iostream>
using namespace std;

class Human1{
    public:
    void speak()
    {
        cout<<"Human1 is speaking"<<endl;
    }
};

class Human2{
    public:
    void speak()
    {
        cout<<"Human2 is speaking"<<endl;
    }
};

class Alexa:public Human1, public Human2{
    public:
    void study()
    {
        cout<<"Alexa is studying"<<endl;
    }
};



int main()
{
    Alexa obj1;
    obj1.Human1::speak();
    obj1.Human2::speak();
    obj1.study();

    

    return 0;
}