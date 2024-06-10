#include "Person.h";
#include <iostream>
#include <string>

using namespace std;

int main() {
  
  Person Jane (string newFirstName, float newWeight);
   Jane ("Jane", 60.0f);

   Person John (string newFirstName, float newWeight);  
   John ("John", 75.0f);

  

    if(Jane == John ) {
    cout << "This is the same person" << endl;
  }
  if(Jane != John ) {
    cout << "This is NOT same person" << endl;
  }
  if (Jane < John) {
    cout << "Jane is younger than John" << endl;
  }
  if (John > Jane) {
     cout << "John is older than Jane" << endl;
  }

  
   
  float totalWeight = Jane + John  ;
  

  cout << "Total Weight: " << totalWeight << endl;

  return 0;
}

   
