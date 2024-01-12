
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
    string name,
         department,
         designation;
    int ID;
    int overtimeHours;

public:
    static int total;
    string set_name;
    string set_department;
    string set_designation;
    int set_ID;
    int set_overtimehourse;

    void setdata();
};

#endif // EMPLOYEE_H
