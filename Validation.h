//
// Created by Raghd Madhun on 03/09/2025.
//

#ifndef BANKSYSTEMPROJECT_VALIDATION_H
#define BANKSYSTEMPROJECT_VALIDATION_H

#include<iostream>
using namespace std;

class Validation {
    public:
    static bool validateName(string name) {
        if (!(name.size() >= 5 && name.size() <= 20)) {
            cout<<"The size of name must be in between 5 and 20!"<<endl;
            return false;
        }

        for (int i = 1; i < name.size(); i++) {
            if (!(name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z')) {  //that its not inside it
                cout<<"The name must be in the alphabet!"<<endl;
                return false;
            }
        }

        return true;
    }

    static bool validatePassword(string password) {
            if (password.size() >= 8 && password.size() <= 20) {
                return true;
            }else {
                cout<<"The password must be between 8 and 20 "<<endl;
                return false;
            }
    }

    static bool validateBalance(double balance) {
        if (balance < 1500) {
            return false;
        }
        return true;
    }

    static bool validateSalary(double salary) {
        if (salary < 5000) {
            return false;
        }
        return true;
    }

};




#endif //BANKSYSTEMPROJECT_VALIDATION_H