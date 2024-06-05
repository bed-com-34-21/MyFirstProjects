#pragma once
#include "Person.h"

Person::Person()  {
     mWeight =0.0f; 
     mFirstName = "";
      mAge = 0;

}

Person::Person(float newWeight, string newFirstName, int newAge) {
     mWeight = newWeight;
      mFirstName = newFirstName;
       mAge = newAge;
}

Person::~Person() {

}

float Person::operator+(const Person& otherPerson)
 {
    return mWeight + otherPerson.mWeight;
};