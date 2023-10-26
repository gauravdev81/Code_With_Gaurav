#include <iostream>
using namespace std;

class Human
{

public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }

    void sleep()
    {
        cout << "Human sleeping" << endl;
    }
};

class Male : public Human
{
public:
    string color;
};

int main()
{
    Male obj1;

    cout << "Object height: " << obj1.height << endl;
    cout << "Object weight: " << obj1.weight << endl;
    cout << "Object age: " << obj1.age << endl;

    obj1.setWeight(50);

    cout << "Object weight: " << obj1.weight << endl;

    obj1.sleep();

    return 0;
}