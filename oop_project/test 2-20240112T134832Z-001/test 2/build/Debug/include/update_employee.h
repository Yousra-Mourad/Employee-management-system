#ifndef UPDATE_EMPLOYEE_H
#define UPDATE_EMPLOYEE_H

#include "employee.h"

class UpdateEmployee : public Employee {
    Employee use_e1,use_e2;
    int id_of_employee_change, num;

public:
    void set_data();
    void change_data(Employee e[]);
};

#endif // UPDATE_EMPLOYEE_H
