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
    void gym()
    {
        cout<<"Human2 is hitting gym"<<endl;
    }
};

class Alexa:public Human1{
    public:
    void study()
    {
        cout<<"Alexa is studying"<<endl;
    }
};

class Siri: public Human1, public Human2{
    public:
    void sing()
    {
        cout<<"Siri is singing"<<endl;
    }

};

int main()
{
    Alexa obj1;
    obj1.speak();
    obj1.study();

    Siri obj2;
    obj2.gym();
    obj2.speak();
    obj2.sing();

    return 0;
}