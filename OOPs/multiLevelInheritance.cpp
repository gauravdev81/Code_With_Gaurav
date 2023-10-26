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

class Alex : public Gaurav{
    public:
    void play()
    {
        cout<<"Alex is playing"<<endl;
    }

};

int main()
{
    Alex obj1;

    obj1.play();
    obj1.speak();
    obj1.study();


    return 0;
}