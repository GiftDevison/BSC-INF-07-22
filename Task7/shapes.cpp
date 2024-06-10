#include <iostream>
#include <cmath>

using namespace std;

namespace shapes {
    class Square {
    private:
        double sideLength;

    public:
        Square() : sideLength(0) {}
        Square(double length) : sideLength(length) {}
        ~Square() {}

        double getSideLength() const {
            return sideLength;
        }
    };

    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle() : base(0), height(0) {}
        Triangle(double b, double h) : base(b), height(h) {}
        ~Triangle() {}

        double getBase() const {
            return base;
        }

        double getHeight() const {
            return height;
        }
    };

    class Circle {
    private:
        double radius;

    public:
        Circle() : radius(0) {}
        Circle(double r) : radius(r) {}
        ~Circle() {}

        double getRadius() const {
            return radius;
        }
    };
}

class Area {
public:
    static double calculateArea(const shapes::Square& square) {
        double side = square.getSideLength();
        return side * side;
    }

    static double calculateArea(const shapes::Triangle& triangle) {
        double base = triangle.getBase();
        double height = triangle.getHeight();
        return 0.5 * base * height;
    }

    static double calculateArea(const shapes::Circle& circle) {
        double radius = circle.getRadius();
        return M_PI * radius * radius;
    }
};

int main() {
    shapes::Square square(5);
    shapes::Triangle triangle(3, 4);
    shapes::Circle circle(2);

    cout << "Area of Square: " << Area::calculateArea(square) << endl;
    cout << "Area of Triangle: " << Area::calculateArea(triangle) << endl;
    cout << "Area of Circle: " << Area::calculateArea(circle) << endl;

}