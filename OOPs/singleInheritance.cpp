#include<iostream>
using namespace std;

class Human{
    public:
    void speak()
    {
        cout<<"Human is speaking"<<endl;
    }
};

class Gaurav : public Human{
    public:
    void study()
    {
        cout<<"Gaurav is studying"<<endl;
    }
};

int main()
{
    Gaurav obj;
    obj.study();
    obj.speak();

    return 0;
}