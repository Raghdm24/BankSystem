//
// Created by Raghd Madhun on 01/09/2025.
//

#ifndef BANKSYSTEMPROJECT_CLIENT_H
#define BANKSYSTEMPROJECT_CLIENT_H


#include "Person.h"   //this include has --> 1- iostream/namespace std/validate

class Client : public Person {
    double balance;

public:
    Client() : Person() {
        this->balance = 0;
    }

    Client(string name, int id, string password, double balance) : Person(name, id, password) {
        setMinBalance(balance);

    }

    //setters
    //setters for setName & setPass will be inherited from Person

    void setMinBalance(double newBalance) {
        if (Validation::validateBalance(newBalance)) {
            this->balance = newBalance;
        }else {
            cout<<"Invalid balance"<<endl;
        }

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
        this->balance += amount;
    }
    void withdraw(double amount) {
        if ( amount <= 0 ) {
            cout<<"Error: "<<amount<<" can't be zero or less."<<endl;
            return;
        }
        if (amount > balance) {
            cout<<"Invalid: Balance is greater than the amount you entered."<<endl;
        }

        this->balance -= amount;
    }
    void transferTo(double amount, Client& receiver) {
        if ( amount <= 0 ) {
            cout<<"Error: "<<amount<<" can't be zero or less."<<endl;
            return;
        }
        withdraw(amount);       //withdraw from this account
        receiver.deposit(amount);   //deposits to reciecer account
    }

    void checkBalance() {
        cout<<"Current balance is "<<balance<<endl;
    }

    void display( ) {
        Person :: display();
        cout<<"Balance: "<<balance<<endl;
        cout<<"-----------------------------"<<endl;
    }

};


#endif //BANKSYSTEMPROJECT_CLIENT_H