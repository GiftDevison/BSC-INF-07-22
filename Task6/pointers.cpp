#include <iostream>
#include <string>

int main(){
    //Allocating an integer 
    int* dynamicInt = new int;
    
    //Allocating a string 
    std::string* dynamicString = new std::string;

    //Ask user to enter values for the integer and string
    std::cout << "Enter an integer value: ";
    std::cin >> *dynamicInt;

    std::cout << "Enter a string value: ";
    std::cin.ignore();
    std::getline(std::cin, *dynamicString);

    //Output of the values of the allocated integer and string
    std::cout << "Dynamically allocated integer value: " << *dynamicInt << std::endl;
    std::cout << "Dynamically allocated string value : " << *dynamicString << std::endl;

    //Deallocate memory
    delete dynamicInt;
    delete dynamicString;

    return 0;

}