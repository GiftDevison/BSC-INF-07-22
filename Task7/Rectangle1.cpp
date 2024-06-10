#define RECTANGLE_H

using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:

    Rectangle();
    Rectangle(float len, float wid);
    ~Rectangle();
    void setLength(float len);
    void setWidth(float wid);
    float getLength();
    float getWidth();
    float area();
};



Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}

Rectangle::Rectangle(float len, float wid) {
    length = len;
    width = wid;
}

Rectangle::~Rectangle() {
    // Destructor does nothing for now
}

void Rectangle::setLength(float len) {
    length = len;
}

void Rectangle::setWidth(float wid) {
    width = wid;
}

float Rectangle::getLength() {
    return length;
}

float Rectangle::getWidth() {
    return width;
}

float Rectangle::area() {
    return length * width;
}

#include <iostream>


int main() {
    float len, wid;

    
    Rectangle rect1;

    cout << "Enter length of the first rectangle: ";
    cin >> len;
    rect1.setLength(len);

    cout << "Enter width of the first rectangle: ";
    cin >> wid;
    rect1.setWidth(wid);

    cout << "Area of the first rectangle: " << rect1.area() << std::endl;

    
    cout << "\nEnter length of the second rectangle: ";
    cin >> len;

    cout << "Enter width of the second rectangle: ";
    cin >> wid;

    Rectangle rect2(len, wid);

    cout << "Area of the second rectangle: " << rect2.area() << std::endl;

    
}

