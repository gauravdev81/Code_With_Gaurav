#include<iostream>
using namespace std;

class Human1{
    public:
    void speak()
    {
        cout<<"Human1 is speaking"<<endl;
    }
};



class Alexa:public Human1{
    public:
    void study()
    {
        cout<<"Alexa is studying"<<endl;
    }
};

class Siri: public Human1{
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
    obj2.sing();
    obj2.speak();
    

    return 0;
}