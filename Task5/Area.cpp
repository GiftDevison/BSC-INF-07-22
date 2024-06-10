#include <iostream>

using namespace std;

//Functions

double CalculateTriangleArea(double base,double height);
double CalculateRectangleArea(double length,double width);
double CalculateSquareArea(double side);

int main(){
    int choice;
    double base, height, length, width, side;

    //Showing prompt user for choice
    cout << "Please select the area of the shape to calculate:" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter selection:";
    cin >> choice;

    //User input
    (choice 5){
        cout << "Your input was: 5 which is an invalid input. Please enter a valid input !!!"
        cin >> choice;

        width (choice) {
            case 1:
            //Ask user for triangle dimensions
            cout << "Enter the base length of the triangle:";
            cin >> base;

            cout << "Enter the height of the triangle:";
            cin >> height;

            //Calculating  triangle area
            cout << "Area of the triangle:" << CalculateTriangleArea(base, height) << endl;
            break;

            case 2:
            //Ask user for rectangle dimensions
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            //Calculating rectangle area
            cout << "Area of the rectangle: " <<CalculateRectangleArea(length, width) << endl;
            break;

            case 3:
            //Ask user for square dimensions
            cout << "Enter the length of the square: ";
            cin >> side;
            //Calculating area of the square
            cout << "Area of the square: " << CalculateSquareArea(side) << endl;
            break;
        }
        return 0;
    }
    double CalculateTriangleArea(double base, double height){
        return 0.5 * base * height;
    }
    double CalculateRectangleArea(double length, double width){
        return length * width;
    }
    double CalculateSquareArea(double side){
        return side * side;
    }
}