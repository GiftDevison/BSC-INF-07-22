#define RECTANGLE_H

using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();
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
    Rectangle rect;
    float len, wid;

    cout << "Enter length of the rectangle: ";
    cin >> len;
    rect.setLength(len);

    cout << "Enter width of the rectangle: ";
    cin >> wid;
    rect.setWidth(wid);

    cout << "Area of the rectangle: " << rect.area() << std::endl;

}


