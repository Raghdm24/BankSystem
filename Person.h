//
// Created by Raghd Madhun on 01/09/2025.
//

#ifndef BANKSYSTEMPROJECT_PERSON_H
#define BANKSYSTEMPROJECT_PERSON_H

#include<iostream>
#include<string>
using namespace std;

class Person {
    protected:
    string name;
    int id;
    string password;

    public:
    //default constructor
    Person() {
        this->id= 0;
    }

    //param const
    Person(string name, int id, string password, double balance) {
        this->name = name;
        this->id = id;
        this->password = password;
    }


};

#endif //BANKSYSTEMPROJECT_PERSON_H