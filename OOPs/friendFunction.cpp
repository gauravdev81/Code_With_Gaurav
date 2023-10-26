#include<iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    
    //constructor
    Rectangle(int w, int h) : width(w), height(h) {
        cout<<"Constructor called and members intialized"<<endl;
    }

    friend int calculateArea(const Rectangle& rect);
};

int calculateArea(const Rectangle& rect) {
    return rect.width * rect.height; // Friend function can access private members
}

int main() {
    Rectangle r(5, 10);
    int area = calculateArea(r);
    return 0;
}
