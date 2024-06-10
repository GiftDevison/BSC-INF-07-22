#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person {
public:
  Person(); 
  Person(const float newWeight,const string newFirstName,const float newAge ); 

  ~Person(); 

  bool operator==(const Person& otherPerson) {
    return mFirstName == otherPerson.mFirstName;
  }

  bool operator!=(const Person& otherPerson){
    return ! (*this == otherPerson);
  }
  bool operator > (const Person& otherPerson) {
    return mAge > otherPerson.mAge;
  }
  bool operator < (const Person& otherPerson) {
    return mAge > otherPerson.mAge;
  }



  void SetFirstName(string fnm);

  void SetWeight(float wei);

  void SetAge (float ag); 
  

  Person operator+ (const Person& otherPerson);

private:
  float mWeight;
  string mFirstName;
  int mAge; 
};


