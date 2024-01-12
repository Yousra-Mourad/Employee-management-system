#ifndef DELETE_EMPLOYEE_H
#define DELETE_EMPLOYEE_H

#include "employee.h"

class deleteEmployee : public Employee {
    int id_delete;

public:
    void set_id();
    void delete_employee_by_id(Employee e[]);

};

#endif // DELETE_EMPLOYEE_H
