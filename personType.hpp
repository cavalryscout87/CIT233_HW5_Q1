//
//  personType.hpp
//  CIT233_HW5_Q1
//
//  Created by Patrick Lockett on 2/10/17.
//  Copyright © 2017 Patrick Lockett. All rights reserved.
//

#ifndef personType_hpp
#define personType_hpp

#include <stdio.h>
#include <string>

using namespace std;

class personType
{
public:
    
    //Function to output the first name and last name
    void print() const;
    
    //Function to set firstName and lastName
    void setFullName(string first, string middle, string last);

    //Function to return the first name
    string getFirstName() const;
    
    //Function to return the middle name
    string getMiddleName() const;
    
    //Function to return the last name
    string getLastName() const;
    
    string getGender() const;

    //Constructor
    personType(string first = "", string middle = "", string last = "", string gender = "");
    
private:
    //variable to store the first name
    string firstName;
    //variable to store middle name
    string middleName;
    //variable to store the last name
    string lastName;
    //variable to store the gender
    string gender;
};

#endif /* personType_hpp */
