//
// Created by Raghd Madhun on 01/09/2025.
//

#ifndef BANKSYSTEMPROJECT_PERSON_H
#define BANKSYSTEMPROJECT_PERSON_H

#include<iostream>
#include "Validation.h"
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
    Person(string name, int id, string password) {
        setName(name);
        setId(id);
        setPassword(password);
    }

    //setters
    void setName(string name) {
        if (Validation::validateName(name)) {
            this->name = name;
        }else {
            cout<<"Name is invalid"<<endl;
        }
    }
    void setId(int id) {
        this->id = id;
    }
    void setPassword(string password) {
        if (Validation::validatePassword(password)) {
            this->password = password;
        }else {
            cout<<"Password is invalid"<<endl;
        }
    }

    //getters
    string getName() {
        return this->name;
    }
    int getId() {
        return this->id;
    }
    string getPassword() {
        return this->password;
    }

    //methods
    void display() {
        cout<<"Name"<<name<<endl;
        cout<<"Id"<<id<<endl;

    }


};

#endif //BANKSYSTEMPROJECT_PERSON_H