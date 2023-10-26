#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getRadius() const {
        return radius; // Read-only function, does not modify the object
    }

    double calculateArea() const {

        //radius=2;  
        //this will give error : assignment of member 'Circle::radius' in read-only object


        return 3.14159 * radius * radius; // Read-only function, does not modify the object
    }
};

int main() {
    const Circle c(5.0); // Create a constant Circle object
    std::cout << "Radius: " << c.getRadius() << std::endl;
    std::cout << "Area: " << c.calculateArea() << std::endl;
    return 0;
}
