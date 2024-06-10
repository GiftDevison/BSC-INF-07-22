#pragma once

#include "Person.h"

Person :: Person () {
    mFirstName = "" ;
    mWeight = 0.0f;
    mAge = 0.0f;
}

Person::Person(const float newWeight,const string newFirstName,const float newAge){
   mFirstName = newFirstName;
   mWeight = newWeight;
   mAge = newAge;
 }

 Person :: ~Person() {}

 void Person :: SetFirstName (string fnm){
   mFirstName = fnm;
 }
 void Person :: SetWeight (float wei){
   mWeight = wei;
 }
 void Person :: SetAge (float ag){
   mAge = ag;
 }

 Person Person :: operator+ (const Person& otherPerson){
   Person person;

   person.mFirstName = this -> mFirstName + otherPerson.mFirstName;
   person.mWeight = this -> mWeight+ otherPerson.mWeight;
   person.mAge = this -> mAge + otherPerson.mAge;
   return person; 
 }








 






    
    