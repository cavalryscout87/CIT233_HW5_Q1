//
//  personType.cpp
//  CIT233_HW5_Q1
//
//  Created by Patrick Lockett on 2/10/17.
//  Copyright © 2017 Patrick Lockett. All rights reserved.
//


//Design a class named personType

#include "personType.hpp"
#include <string>
#include <iostream>

using namespace std;

void personType::print() const
{
    cout << firstName << " " << lastName;
}
//Additional data members to store the person’s middle name and the person’s gender (a string such as male or female).
void personType::setFullName(string first, string middle, string last)
{
    firstName = first;
    middleName = middle;
    lastName = last;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

//set gender

string personType::getGender() const
{
    return gender;
}



personType::personType(string first, string middle, string last, string genderType)
{
    firstName = first;
    middleName = middle;
    lastName = last;
    gender = genderType;
}
