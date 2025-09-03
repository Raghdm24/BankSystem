#ifndef BANKSYSTEMPROJECT_EMPLOYEE_H
#define BANKSYSTEMPROJECT_EMPLOYEE_H

#include "Person.h"

class Employee : public Person{
protected:      // protected cayse the admin gonna inherit from emoployee
    double salary;

public:
    Employee() : Person () {
        this->salary = 0;

    }
    Employee(string name, int id, string password, double salary) : Person(name, id, password) {
        setSalary(salary);
    }

    //setters
    //setter fror name and password will be inherited

    void setSalary(double newSal) {
        if (Validation::validateSalary(salary)) {
            this->salary = newSal;
        }else {
            cout << "Salary validation failed!" << endl;
        }
    }

    //getter
    double getSalary() {
        return salary;
    }

    //display function
    void display() {
        cout<<"-------Employee information-------"<<endl;
        Person::display();              //cause the person has already a display
        cout<<"Salary: "<<salary<<endl;

    }
};

#endif