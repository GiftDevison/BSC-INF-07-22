#include <iostream>

using namespace std;

void SwapNumbers(int &a, int&b){
    int temp = b;
    b = a;
    a = temp;
}
int Swap();
int main(){
    int varA = 25;
    int varB = 100;

    cout << "varA before swap:" << varA << endl;//varA is 25
    cout << "varB before swap:" << varB << endl;//varA is 100

    SwapNumbers(varA, varB);

    cout << "varA after swap:" << varA << endl;//varA is 100
    cout << "varB after swap:" << varB << endl;//varA is 25
    
}


