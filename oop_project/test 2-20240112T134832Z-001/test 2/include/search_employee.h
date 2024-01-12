
#ifndef SEARCH_EMPLOYEE_H
#define SEARCH_EMPLOYEE_H

#include "employee.h"

class SearchEmployee : public Employee {
    static int found;
    int num;

public:
    void search_by_id(Employee e[]);



};



#endif // SEARCH_EMPLOYEE_H
