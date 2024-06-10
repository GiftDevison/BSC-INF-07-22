#include <iostream>
#include <limits>

using namespace std;

int main(){
    int userInput;

    while (true){
        cout << "Enter an integer value between 5 and 10:";

        if (!(cin >> userInput)){

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Sorry,you entered an invalid number,please try again." << endl;
        }else if (userInput < 5 || userInput > 10){

            cout << "You entered 1. Please enter a number between 5 and 10." << endl;
        }else{
            break;
        }
    }
    cout << "Your input value (6) has been accepted." << endl;

    return 0:
}