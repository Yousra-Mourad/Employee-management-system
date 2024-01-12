#ifndef SHOW_EMPLOYEE_H
#define SHOW_EMPLOYEE_H
#include"salery.h"
#include "employee.h"

class ShowEmployee : public Employee {
public:
    void show_all_data(Employee e[]);

void showsalary(int size, Employee emp[], Salary sa[]);
};

#endif // SHOW_EMPLOYEE_H
