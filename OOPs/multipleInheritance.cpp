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
    void study()
    {
        cout<<"Human2 is studying"<<endl;
    }
};

class child : public Human1,public Human2{
    public:
    void sing()
    {
        cout<<"Child is singing"<<endl;
    }

};

int main()
{
    child tony;
    tony.sing();
    tony.speak();
    tony.study();

    return 0;
}