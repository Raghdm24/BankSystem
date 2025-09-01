//
// Created by Raghd Madhun on 01/09/2025.
//

#ifndef BANKSYSTEMPROJECT_CLIENT_H
#define BANKSYSTEMPROJECT_CLIENT_H

#include<iostream>
#include "Person.h"
#include <cctype>
using namespace std;

class Client : public Person {
private:
    double balance;

public:
    Client() {
        balance = 0;
    }

    Client(string n, int i, string pass, double bal) {
        name = n;
        id = i;
        pass = pass;
        balance = bal;
    }

    //setters
    void setName(string newName) {
        if (newName.length() < 5 || newName.length() > 20) {
            cout<<"Error: "<<newName<<" must be betweem 5 and 20"<<endl;
            return;
        }

        for (int i =0; i < newName.length(); i++) {
            if (!isalpha(newName[i] && newName[i] != ' ')) {
                cout<<"Error: Name must contain only alphabetic characters and spaces."<<endl;
                return;
            }
        }
        this->name= newName;
        cout<<"Name set successfully "<<newName<<endl;
    }

    void setPassword(string newPass) {
        if (newPass.length() < 8 || newPass.length() > 20) {
            cout<<"Error: "<<newPass<<" must be betweem 5 and 20"<<endl;
            return;
        }
        password= newPass;
    }

    void setMinBalance(double newBalance) {
        if (newBalance < 1500) {
            cout<<"Error: "<<newBalance<<" is less than 1500"<<endl;
            return;
        }
        balance = newBalance;
        cout<<"Balance set successfully "<<newBalance<<endl;

    }

    //Getters
    string getName() {
        return name;
    }
    int getId() {
        return id;
    }
    string getPassword() {
        return password;
    }
    double getBalance() {
        return balance;
    }

    //Methods
    void deposit(double amount) {
        if ( amount <= 0 ) {
            cout<<"Error: "<<amount<<" can't be zero or less."<<endl;
            return;
        }
        balance += amount;
    }
    void withdraw(double amount) {
        if ( amount <= 0 ) {
            cout<<"Error: "<<amount<<" can't be zero or less."<<endl;
            return;
        }
        if (amount > balance) {
            cout<<"Invalid: Balance is greater than the amount you entered."<<endl;
        }

        balance -= amount;
    }
    void transferTo(double amount, Client& receiver) {
        if ( amount <= 0 ) {
            cout<<"Error: "<<amount<<" can't be zero or less."<<endl;
            return;
        }
        this->balance -= amount;
        receiver.balance += amount;
    }

    void checkBalance() {
        cout<<"Current balance is "<<balance<<endl;
    }

    void display( ) {
        cout<<"Client infomation:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Password: "<<password<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"-----------------------------"<<endl;
    }



};


#endif //BANKSYSTEMPROJECT_CLIENT_H