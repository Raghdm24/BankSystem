#ifndef BANKSYSTEMPROJECT_ADMIN_H
#define BANKSYSTEMPROJECT_ADMIN_H


#include "Employee.h"

class Admin : public Employee{

public:
    Admin() : Employee(){}

    Admin(string adminName, int adminId,string adminPassword, double adminSalary)
        : Employee(adminName,adminId,adminPassword, adminSalary) {}

    void display() {
        Employee::display();
    }


};

#endif